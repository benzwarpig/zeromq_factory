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

class ValueZeroMqPublish
{
public:
    ~ValueZeroMqPublish(){};

public:
    static ValueZeroMqPublish& GetInstance()
    {
        static ValueZeroMqPublish tmp;
        return tmp;
    }

    template < typename MsgType >
    void RegisterZMQNode( const std::string& ip )
    {
        auto tmp = std::make_shared< ZeroMqImpl >( ZMQ_PUB );
        tmp->socket.bind( ip );

        zeromq_pack.emplace( std::make_pair( MsgType().GetTypeName(), std::move( tmp ) ) );
    }

    template < typename MsgType >
    void PublishProtoMsg( const MsgType& msg )
    {
        std::string tmp;
        if ( msg.SerializeToString( &tmp ) )
        {
            if ( 0 != zeromq_pack.count( msg.GetTypeName() ) )
            {
                zeromq_pack[ msg.GetTypeName() ]->socket.send( zmq::const_buffer( tmp.data(), tmp.size() ) );
            }
            else
            {
                spdlog::error( "without the member of this pack , {}", msg.GetTypeName() );
            }
        }
    }

private:
    ValueZeroMqPublish(){};

    std::unordered_map< std::string, std::shared_ptr< ZeroMqImpl > > zeromq_pack;
}; // ValueZeroMqPublish

class ValueZeroMqSubscribe
{
public:
    ValueZeroMqSubscribe() :
        stop_flag( false )
    {
        spdlog::info( "ValueZeroMqSubscribe is Created" );
        subscribe_thread = std::make_shared< std::thread >( &ValueZeroMqSubscribe::ZeroMqSubscribeThread, this );
    };

    ~ValueZeroMqSubscribe()
    {
        stop_flag = true;
        if ( subscribe_thread->joinable() )
        {
            subscribe_thread->join();
        }
        spdlog::info( "ValueZeroMqSubscribe is Destory" );
    };

    static ValueZeroMqSubscribe& GetInstance()
    {
        static ValueZeroMqSubscribe tmp;
        return tmp;
    }

private:
    ValueZeroMqSubscribe( const ValueZeroMqSubscribe& )            = delete;
    ValueZeroMqSubscribe& operator=( const ValueZeroMqSubscribe& ) = delete;

public:
    template < typename MsgType >
    void RegisterZMQNode( const std::string& ip, std::function< void( void* ) >&& callback )
    {
        std::shared_ptr< ZeroMqImpl > tmp_zeromq_impl = std::make_shared< ZeroMqImpl >( ZMQ_SUB );
        tmp_zeromq_impl->socket.set( zmq::sockopt::rcvtimeo, 0 );
        tmp_zeromq_impl->socket.set( zmq::sockopt::conflate, 1 );
        tmp_zeromq_impl->socket.set( zmq::sockopt::subscribe, "" );
        tmp_zeromq_impl->socket.connect( ip );

        std::shared_ptr< google::protobuf::Message > tmp_proto = std::make_shared< MsgType >();

        subscribe_pack.emplace( std::make_pair( MsgType().GetTypeName(), std::make_tuple( std::move( tmp_zeromq_impl ), std::move( tmp_proto ), std::move( callback ) ) ) );
    }

private:
    void ZeroMqSubscribeThread()
    {
        enum
        {
            zeromq_index = ( 0 ),
            proto_index,
            callback_index,
        };
        while ( !stop_flag )
        {
            if ( subscribe_pack.size() != 0 )
            {
                zmq::message_t str_data;
                for ( const auto& tmp : subscribe_pack )
                {
                    auto zeromq_tmp = std::get< zeromq_index >( tmp.second );
                    auto proto_tmp  = std::get< proto_index >( tmp.second );
                    auto callback   = std::get< callback_index >( tmp.second );

                    if ( zeromq_tmp->socket.recv( str_data ) )
                    {
                        if ( proto_tmp->ParseFromString( str_data.to_string() ) )
                        {
                            callback( ( void* ) proto_tmp.get() );
                        }
                        else
                        {
                            spdlog::error( "{} parse failure!!!!", proto_tmp->GetTypeName() );
                        }
                    }
                }
            }

            std::this_thread::sleep_for( std::chrono::milliseconds( 5 ) );
        }
    }

private:
    bool                           stop_flag;
    std::shared_ptr< std::thread > subscribe_thread;

    std::unordered_map< std::string, std::tuple< std::shared_ptr< ZeroMqImpl >, std::shared_ptr< google::protobuf::Message >, std::function< void( void* ) > > > subscribe_pack;

}; // ValueZeroMqSubscribe

} // namespace ZeroMqFactory
