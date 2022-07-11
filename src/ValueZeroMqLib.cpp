#include "ValueZeroMqLib.h"

#include "MyOccupancyGrid.pb.h"

int main( void )
{
    spdlog::info( "zeromq factory open !" );
    LSLAM::MyOccupancyGrid msg;

    // ZeroMqFactory::ValueZeroMqPublish msg_publish("192.168.8.29");

    while ( 1 )
    {
        spdlog::info( "zeromq factory open !" );
        std::this_thread::sleep_for( std::chrono::milliseconds( 1000 ) );
    }

    return 0;
}