#include "ValueZeroMqLib.h"

#include "MyOccupancyGrid.pb.h"

using namespace ZeroMqFactory;

int main( void )
{
    spdlog::info( "zeromq factory open !" );

    ZeroMqFactory::ValueZeroMqPublish::GetInstance().RegisterPublisher< LSLAM::MyOccupancyGrid >( "tcp://*:1234" );

    ZeroMqFactory::ValueZeroMqSubscribe::GetInstance().RegisterPublisher< LSLAM::MyOccupancyGrid >( "tcp://localhost:1234",
                                                                                                    []( const LSLAM::MyOccupancyGrid& msg ) {
                                                                                                        spdlog::info( "Subscribe once {} {}", msg.saved_origin_x_(), msg.saved_origin_y_() );
                                                                                                    } );
    while ( 1 )
    {
        LSLAM::MyOccupancyGrid msg;

        msg.set_saved_origin_x_( 1000 );
        msg.set_saved_origin_y_( 500 );

        ZeroMqFactory::ValueZeroMqPublish::GetInstance().PublishProtoMsg< LSLAM::MyOccupancyGrid >( msg );

        std::this_thread::sleep_for( std::chrono::milliseconds( 1000 ) );
    }

    return 0;
}