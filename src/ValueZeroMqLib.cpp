#include "ValueZeroMqLib.h"

#include "MyOccupancyGrid.pb.h"

using namespace ZeroMqFactory;

void MyOccupancyGridCallBack( const LSLAM::MyOccupancyGrid& msg )
{
    spdlog::info( "Subscribe once {} {}", msg.saved_origin_x_(), msg.saved_origin_y_() );
}

int main( void )
{
    spdlog::info( "zeromq factory open !" );

    ValueZeroMqPublish::GetInstance().RegisterZMQNode< LSLAM::MyOccupancyGrid >( "tcp://*:1234" );

    ValueZeroMqSubscribe::GetInstance().RegisterZMQNode< LSLAM::MyOccupancyGrid >( "tcp://localhost:1234", std::bind( MyOccupancyGridCallBack, std::placeholders::_1 ) );

    while ( 1 )
    {
        LSLAM::MyOccupancyGrid msg;

        msg.set_saved_origin_x_( 1000 );
        msg.set_saved_origin_y_( 200 );

        ValueZeroMqPublish::GetInstance().PublishProtoMsg< LSLAM::MyOccupancyGrid >( msg );

        std::this_thread::sleep_for( std::chrono::milliseconds( 1000 ) );
    }

    return 0;
}
