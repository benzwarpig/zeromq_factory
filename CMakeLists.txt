cmake_minimum_required(VERSION 3.5)
project(ZeroMqFactory)

# 定义编译模式 Release/Debug
# set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

add_compile_options(-std=c++14)
add_definitions("-g")

find_package(spdlog)
find_package(Boost)

find_package(PkgConfig)
pkg_check_modules(ZMQ REQUIRED libzmq)

# find the protobuf compiler and libraries
find_package(Protobuf REQUIRED)

# check if protobuf was found
if(PROTOBUF_FOUND)
    message("protobuf found")

else()
    message(FATAL_ERROR "Cannot find Protobuf")
endif()

set(project_dir ${CMAKE_CURRENT_SOURCE_DIR})
message("${project_dir}" ${project_dir})

include_directories(
    .
    ./include
    ${Boost_INCLUDE_DIRS}
    ${ZMQ_INCLUDE_DIR}
    ${project_dir}/proto/proto_source
)

add_executable(
    ${PROJECT_NAME}
    ./src/ValueZeroMqLib.cpp
    ${project_dir}/proto/proto_source/MyOccupancyGrid.pb.cc # 导入外部proto文件
    ${project_dir}/proto/proto_source/Header.pb.cc
    ${project_dir}/proto/proto_source/Pose.pb.cc
    ${project_dir}/proto/proto_source/Point.pb.cc
    ${project_dir}/proto/proto_source/Quaternion.pb.cc
    ${project_dir}/proto/proto_source/MyTransformStamped.pb.cc
    ${project_dir}/proto/proto_source/Transform.pb.cc
    ${project_dir}/proto/proto_source/Vector3d.pb.cc
    ${project_dir}/proto/proto_source/MyPointCloud2.pb.cc
    ${project_dir}/proto/proto_source/RangeSensorMsg.pb.cc
    ${project_dir}/proto/proto_source/CliffSensorMsg.pb.cc
    ${project_dir}/proto/proto_source/STM32MsgToCostMap.pb.cc
    ${project_dir}/proto/proto_source/RobotPose.pb.cc
    ${project_dir}/proto/proto_source/CostmapMsgToPlanning.pb.cc
    ${project_dir}/proto/proto_source/cloudPCL.pb.cc
)

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} spdlog::spdlog m pthread ${ZMQ_LIBRARIES} ${PROTOBUF_LIBRARIES})
