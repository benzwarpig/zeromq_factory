#include "ValueZeroMqLib.h"

// 展示ZeroMq的用法(发布订阅)
#if 0

#include "MyOccupancyGrid.pb.h"
#include "RobotPose.pb.h"

using namespace ZeroMqFactory;

template < typename MsgType = std::false_type::value_type >
void SubscribeCallBack( void* msg )
{
    spdlog::error( "error callback msg !!!!" );
}

template <>
void SubscribeCallBack< LSLAM::MyOccupancyGrid >( void* msg )
{
    LSLAM::MyOccupancyGrid* mmsg = static_cast< LSLAM::MyOccupancyGrid* >( msg );

    spdlog::info( "saved_origin_x : {},saved_origin_y : {}", mmsg->saved_origin_x_(), mmsg->saved_origin_y_() );
}

template <>
void SubscribeCallBack< LSLAM::RobotPose >( void* msg )
{
    LSLAM::RobotPose* mmsg = static_cast< LSLAM::RobotPose* >( msg );

    spdlog::info( "x : {},y : {} ,theta: {}", mmsg->x(), mmsg->y(), mmsg->theta() );
}

int main( void )
{
    spdlog::info( "zeromq factory open !" );

    /* 创建一个发布LSLAM::MyOccupancyGrid消息类型的生产者 */
    ValueZeroMqPublish::GetInstance().RegisterZMQNode< LSLAM::MyOccupancyGrid >( "tcp://*:1234" );
    ValueZeroMqPublish::GetInstance().RegisterZMQNode< LSLAM::RobotPose >( "tcp://*:1235" );

    /* 创建一个订阅LSLAM::MyOccupancyGrid消息类型的消费者 */
    ValueZeroMqSubscribe::GetInstance().RegisterZMQNode< LSLAM::MyOccupancyGrid >( "tcp://localhost:1234", std::move( SubscribeCallBack< LSLAM::MyOccupancyGrid > ) );
    ValueZeroMqSubscribe::GetInstance().RegisterZMQNode< LSLAM::RobotPose >( "tcp://localhost:1235", std::move( SubscribeCallBack< LSLAM::RobotPose > ) );

    while ( 1 )
    {
        LSLAM::MyOccupancyGrid msg;
        msg.set_saved_origin_x_( 9999 );
        msg.set_saved_origin_y_( 8888 );
        ValueZeroMqPublish::GetInstance().PublishProtoMsg( msg );

        LSLAM::RobotPose pose_msg;
        pose_msg.set_x( 5 );
        pose_msg.set_y( 10 );
        pose_msg.set_theta( 900 );
        ValueZeroMqPublish::GetInstance().PublishProtoMsg( pose_msg );

        std::this_thread::sleep_for( std::chrono::milliseconds( 1000 ) );
    }

    return 0;
}

#endif