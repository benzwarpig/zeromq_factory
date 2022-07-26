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

enum
{
    zeromq_index = ( 0 ),
    proto_index,
    callback_index,
};

class ZeroMqImpl
{
public:
    ZeroMqImpl( int type, int io_threads = 1 ) :
        context( io_threads ), socket( context, type )
    {
    }

    ~ZeroMqImpl()
    {
        socket.close();
        context.close();
    }

    zmq::socket_t& GetSocketRef()
    {
        return socket;
    }

private:
    zmq::context_t context;
    zmq::socket_t  socket;
}; // ZeroMqImpl

class ValueZeroMqPublish
{
private:
    ValueZeroMqPublish()
    {
        spdlog::info( "ValueZeroMqPublish is Created" );
    };
    ~ValueZeroMqPublish()
    {
        spdlog::info( "ValueZeroMqPublish is Destory" );
    };

    ValueZeroMqPublish( const ValueZeroMqPublish& )            = delete;
    ValueZeroMqPublish& operator=( const ValueZeroMqPublish& ) = delete;

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
    std::unordered_map< std::string, std::shared_ptr< ZeroMqImpl > > zeromq_pack;
}; // ValueZeroMqPublish

class ValueZeroMqSubscribe
{
public:
    static ValueZeroMqSubscribe& GetInstance()
    {
        static ValueZeroMqSubscribe tmp;
        return tmp;
    }

private:
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
        spdlog::info( "ValueZeroMqSubscribe is Destory {}", typeid( *this ).name() );
    };
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

        subscribe_pack.emplace( std::make_pair( MsgType().GetTypeName(),
                                                std::make_tuple( std::move( tmp_zeromq_impl ), std::move( tmp_proto ), std::move( callback ) ) ) );
    }

private:
    void ZeroMqSubscribeThread()
    {
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

                    if ( zeromq_tmp->GetSocketRef().recv( str_data ) )
                    {
                        if ( proto_tmp->ParseFromString( str_data.to_string() ) )
                        {
                            callback( dynamic_cast< void* >( proto_tmp.get() ) );
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

    std::unordered_map< std::string,
                        std::tuple< std::shared_ptr< ZeroMqImpl >, std::shared_ptr< google::protobuf::Message >, std::function< void( void* ) > > >
        subscribe_pack;

}; // ValueZeroMqSubscribe

class ValueZeroMqServce
{
public:
    static ValueZeroMqServce& GetInstance()
    {
        static ValueZeroMqServce tmp;
        return tmp;
    }

private:
    ValueZeroMqServce() :
        stop_flag( false )
    {
        servce_thread = std::make_shared< std::thread >( &ValueZeroMqServce::ZeroMqServceThread, this );
        spdlog::info( "ValueZeroMqServce is Created" );
    };
    ~ValueZeroMqServce()
    {
        stop_flag = true;
        if ( servce_thread->joinable() )
        {
            servce_thread->join();
        }
        spdlog::info( "ValueZeroMqServce is Destory , {}", typeid( *this ).name() );
    };

    ValueZeroMqServce( const ValueZeroMqServce& )            = delete;
    ValueZeroMqServce& operator=( const ValueZeroMqServce& ) = delete;

public:
    template < typename MsgType >
    void RegisterZMQNode( const std::string& ip, std::function< void( void*, const zmq::socket_t& ) >&& callback )
    {
        std::shared_ptr< ZeroMqImpl > tmp_node = std::make_shared< ZeroMqImpl >( ZMQ_REP );
        tmp_node->socket.set( zmq::sockopt::rcvtimeo, 0 );
        tmp_node->socket.set( zmq::sockopt::conflate, 1 );
        tmp_node->socket.bind( ip );

        std::shared_ptr< google::protobuf::Message > tmp_proto = std::make_shared< MsgType >();

        servce_pack.emplace( std::make_pair( MsgType().GetTypeName(), std::make_tuple( std::move( tmp_node ), std::move( tmp_proto ), std::move( callback ) ) ) );
    }

private:
    void ZeroMqServceThread()
    {
        while ( !stop_flag )
        {
            if ( servce_pack.size() != 0 )
            {
                zmq::message_t str_data;
                for ( const auto& tmp : servce_pack )
                {
                    auto zeromq_tmp = std::get< zeromq_index >( tmp.second );
                    auto proto_tmp  = std::get< proto_index >( tmp.second );
                    auto callback   = std::get< callback_index >( tmp.second );

                    if ( zeromq_tmp->GetSocketRef().recv( str_data ) )
                    {
                        if ( proto_tmp->ParseFromString( str_data.to_string() ) )
                        {
                            callback( dynamic_cast< void* >( proto_tmp.get() ), zeromq_tmp->GetSocketRef() );
                        }
                        else
                        {
                            spdlog::error( "{} parse failure!!!!", proto_tmp->GetTypeName() );
                            std::string temp = "failure";
                            zeromq_tmp->GetSocketRef().send( zmq::const_buffer( temp.data(), temp.size() ) );
                        }
                    }
                }
            }

            std::this_thread::sleep_for( std::chrono::milliseconds( 5 ) );
        }
        spdlog::info( "ZeroMqServceThread is stop !!!" );
    }

private:
    bool                           stop_flag;
    std::shared_ptr< std::thread > servce_thread;

    std::unordered_map< std::string,
                        std::tuple< std::shared_ptr< ZeroMqImpl >, std::shared_ptr< google::protobuf::Message >, std::function< void( void*, const zmq::socket_t& ) > > >
        servce_pack;
}; // ValueZeroMqServce

class ValueZeroMqClient
{
public:
    static ValueZeroMqClient& GetInstance()
    {
        static ValueZeroMqClient tmp;
        return tmp;
    }

private:
    ValueZeroMqClient(){};
    ~ValueZeroMqClient(){};

    ValueZeroMqClient( const ValueZeroMqClient& )            = delete;
    ValueZeroMqClient& operator=( const ValueZeroMqClient& ) = delete;

public:
    template < typename MsgType >
    void RegisterZMQNode( const std::string& ip )
    {
        auto tmp = std::make_shared< ZeroMqImpl >( ZMQ_REQ );

        int timeout = 1000;
        tmp->socket.set_option( ZMQ_RCVTIMEO, &timeout, sizeof( timeout ) ); // 在一个recv操作返回EAGAIN错误前的最大时间
        tmp->socket.set_option( ZMQ_SNDTIMEO, &timeout, sizeof( timeout ) ); // 在一个发送操作返回EAGAIN之前等待的最大时间

        int linger = 0;
        tmp->socket.set_option( ZMQ_LINGER, &linger, sizeof( linger ) ); // socket关闭时等待send内容的等待时间

        tmp->socket.bind( ip );

        client_pack.emplace( std::make_pair( MsgType().GetTypeName(), std::move( tmp ) ) );
    }

private:
    std::unordered_map< std::string, std::shared_ptr< ZeroMqImpl > > client_pack;
};

} // namespace ZeroMqFactory
