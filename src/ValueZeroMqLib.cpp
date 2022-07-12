#include "ValueZeroMqLib.h"

#include "MyOccupancyGrid.pb.h"

using namespace ZeroMqFactory;

int main( void )
{
    spdlog::info( "zeromq factory open !" );
    LSLAM::MyOccupancyGrid msg;

    // ValueZeroMqPublish< LSLAM::MyOccupancyGrid > msg_publish( "tcp://*:1234" );
    // MsgFactory< ValueZeroMqPublish< LSLAM::MyOccupancyGrid > >::GetInstance().RegistrateProductToFactory( "tcp://*:1234" );

    while ( 1 )
    {
        spdlog::info( "zeromq factory open !" );
        std::this_thread::sleep_for( std::chrono::milliseconds( 1000 ) );
    }

    return 0;
}