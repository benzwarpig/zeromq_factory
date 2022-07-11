/**
 * @file ValueZeroMqLib.h
 * @author benzs_war_pig (benzwarpig@outlook.com)
 * @brief zeromq factory
 * @version 1.0
 * @date 2022-07-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#pragma once

#include <string>
#include <memory>
#include <thread>
#include <functional>

#include <zmq.hpp>
#include <spdlog/spdlog.h>
#include <google/protobuf/message.h>

namespace ZeroMqFactory {

template < class ProductType >
class AbstractZeroMqInterface
{
public:
protected:
    AbstractZeroMqInterface(){};
    virtual ~AbstractZeroMqInterface(){};

private:
    AbstractZeroMqInterface( const AbstractZeroMqInterface& )            = delete;
    AbstractZeroMqInterface& operator=( const AbstractZeroMqInterface& ) = delete;
}; // AbstractZeroMqInterface

class ZeroMqImpl
{
public:
    ZeroMqImpl( int type, int io_threads = 1 ) :
        context( io_threads ), socket( context, type )
    {
    }

    virtual ~ZeroMqImpl()
    {
        socket.close();
        context.close();
    }

public:
    zmq::context_t context;
    zmq::socket_t  socket;
}; // ZeroMqImpl

template < typename MsgType, typename = typename std::enable_if< std::is_base_of< google::protobuf::Message, MsgType >::value >::type >
class ValueZeroMqPublish
{
public:
    ValueZeroMqPublish( const std::string& ip )
    {
        zeromq_pack = std::make_unique< ZeroMqImpl >( ZMQ_PUB );
        zeromq_pack->socket.bind( ip );
    };
    ~ValueZeroMqPublish(){};

public:
    void PublishProtoMsg( const MsgType& msg )
    {
        std::string tmp;
        if ( msg.SerializeToString( &tmp ) )
        {
            zeromq_pack->socket.send( zmq::const_buffer( tmp.data(), tmp.size() ) );
        }
    }

private:
    std::unique_ptr< ZeroMqImpl > zeromq_pack;
}; // ValueZeroMqPublish

template < typename MsgType, typename = typename std::enable_if< std::is_base_of< google::protobuf::Message, MsgType >::value >::type >
class ValueZeroMqSubscribe
{
    using CallBackFuncType = std::function< void( const MsgType& msg ) >;

public:
    ValueZeroMqSubscribe( const std::string& ip, CallBackFuncType callback ) :
        stop_flag( false )
    {
        zeromq_pack = std::make_unique< ZeroMqImpl >( ZMQ_SUB );
        zeromq_pack->socket.set( zmq::sockopt::rcvtimeo, 10 );
        zeromq_pack->socket.set( zmq::sockopt::conflate, 1 );
        zeromq_pack->socket.set( zmq::sockopt::subscribe, "" );
        zeromq_pack->socket.connect( ip );

        zeromq_thread = std::make_unique< std::thread >( &ValueZeroMqSubscribe< MsgType >::SubscribeThread, this, std::ref( callback ) );
    };

    ~ValueZeroMqSubscribe(){};

    void StopThread()
    {
        stop_flag = true;
        if ( zeromq_thread->joinable() )
        {
            zeromq_thread->join();
        }
    }

private:
    void SubscribeThread( CallBackFuncType call_back )
    {
        MsgType msg;
        while ( !stop_flag )
        {
            zmq::message_t str_data;
            if ( !zeromq_pack->socket.recv( str_data ) )
            {
                continue;
            }
            if ( msg.ParseFromString( str_data.to_string() ) )
            {
                call_back( msg );
            }
            else
            {
                spdlog::info( "{} parse failure!!!!", MsgType().GetTypeName() );
            }
        }
    }

private:
    bool stop_flag;

    std::unique_ptr< ZeroMqImpl > zeromq_pack;

    std::unique_ptr< std::thread > zeromq_thread;

}; // ValueZeroMqSubscribe

} // namespace ZeroMqFactory
