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
    template < typename MsgType >
    void RegisterPublisher( const std::string& ip )
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
        stop_flag( false ){};

    ~ValueZeroMqSubscribe(){};

    void StopThread()
    {
        stop_flag = true;
        for ( auto& tmp : zeromq_threads )
        {
            if ( tmp->joinable() )
            {
                tmp->join();
            }
        }
    }

    template < typename CallBackFuncType, typename MsgType, typename = typename std::enable_if< std::is_base_of< google::protobuf::Message, MsgType >::value >::type >
    void RegisterPublisher( const std::string& ip, CallBackFuncType callback )
    {
        std::shared_ptr< ZeroMqImpl > zeromq_pack = std::make_shared< ZeroMqImpl >( ZMQ_SUB );
        zeromq_pack->socket.set( zmq::sockopt::rcvtimeo, 10 );
        zeromq_pack->socket.set( zmq::sockopt::conflate, 1 );
        zeromq_pack->socket.set( zmq::sockopt::subscribe, "" );
        zeromq_pack->socket.connect( ip );

        std::shared_ptr< std::thread > zeromq_thread = std::make_shared< std::thread >( &ValueZeroMqSubscribe::SubscribeThread< MsgType >, this, std::ref( callback ) );

        zeromq_packs.emplace( std::make_pair( MsgType().GetTypeName(), std::move( zeromq_pack ) ) );
        zeromq_threads.push_back( std::move( zeromq_thread ) );
    }

private:
    template < typename CallBackFuncType, typename MsgType, typename = typename std::enable_if< std::is_base_of< google::protobuf::Message, MsgType >::value >::type >
    void SubscribeThread( CallBackFuncType call_back )
    {
        MsgType msg;
        while ( !stop_flag )
        {
            if ( 0 != zeromq_packs.count( msg.GetTypeName() ) )
            {
                zmq::message_t str_data;
                if ( !zeromq_packs[ msg.GetTypeName() ]->socket.recv( str_data ) )
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
    }

private:
    bool stop_flag;

    std::unordered_map< std::string, std::shared_ptr< ZeroMqImpl > > zeromq_packs;

    std::vector< std::shared_ptr< std::thread > > zeromq_threads;

}; // ValueZeroMqSubscribe

// template < class ProductType >
// class MsgFactory
// {
// public:
//     MsgFactory(){};
//     ~MsgFactory(){};

//     static MsgFactory& GetInstance()
//     {
//         static MsgFactory obj;
//         return obj;
//     }

// private:
//     MsgFactory( const MsgFactory& )            = delete;
//     MsgFactory& operator=( const MsgFactory& ) = delete;

// public:
//     bool RegistrateProductToFactory( const std::string& id )
//     {
//         ProductionLine.insert( { id, std::make_shared< ProductType >( id ) } );
//     }

//     template < typename MsgType, typename = typename std::enable_if< std::is_base_of< google::protobuf::Message, MsgType >::value >::type >
//     bool RegistrateProductToFactory( const std::string& id, std::function< void( const MsgType& msg ) > callback )
//     {
//         ProductionLine.insert( { id, std::make_shared< ProductType >( id, callback ) } );
//     }

// private:
//     std::unordered_map< std::string, std::shared_ptr< ProductType > > ProductionLine;

// }; // MsgFactory

} // namespace ZeroMqFactory
