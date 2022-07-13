#include "ValueZeroMqLib.h"

#include "MyOccupancyGrid.pb.h"

using namespace ZeroMqFactory;

int main( void )
{
    spdlog::info( "zeromq factory open !" );

    ZeroMqFactory::ValueZeroMqPublish::GetInstance().RegisterPublisher< LSLAM::MyOccupancyGrid >( "tcp://*:1234" );

    ZeroMqFactory::ValueZeroMqSubscribe::GetInstance().RegisterPublisher< LSLAM::MyOccupancyGrid >( "tcp://*:1234",
                                                                                                    []( const LSLAM::MyOccupancyGrid& msg ) {
                                                                                                        spdlog::info( "Subscribe once" );
                                                                                                    } );

    while ( 1 )
    {
        LSLAM::MyOccupancyGrid msg;
        ZeroMqFactory::ValueZeroMqPublish::GetInstance().PublishProtoMsg< LSLAM::MyOccupancyGrid >( msg );

        std::this_thread::sleep_for( std::chrono::milliseconds( 1000 ) );
    }

    return 0;
}