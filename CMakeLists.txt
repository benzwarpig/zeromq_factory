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
    ${project_dir}/proto/proto
)

add_executable(
    ${PROJECT_NAME}
    ./src/ValueZeroMqLib.cpp
    ${project_dir}/proto/proto/MyOccupancyGrid.pb.cc # 导入外部proto文件
    ${project_dir}/proto/proto/Header.pb.cc
    ${project_dir}/proto/proto/Pose.pb.cc
    ${project_dir}/proto/proto/Point.pb.cc
    ${project_dir}/proto/proto/Quaternion.pb.cc
    ${project_dir}/proto/proto/MyTransformStamped.pb.cc
    ${project_dir}/proto/proto/Transform.pb.cc
    ${project_dir}/proto/proto/Vector3d.pb.cc
    ${project_dir}/proto/proto/MyPointCloud2.pb.cc
    ${project_dir}/proto/proto/RangeSensorMsg.pb.cc
    ${project_dir}/proto/proto/CliffSensorMsg.pb.cc
    ${project_dir}/proto/proto/STM32MsgToCostMap.pb.cc
    ${project_dir}/proto/proto/RobotPose.pb.cc
    ${project_dir}/proto/proto/CostmapMsgToPlanning.pb.cc
    ${project_dir}/proto/proto/cloudPCL.pb.cc
)

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} spdlog::spdlog m pthread ${ZMQ_LIBRARIES} ${PROTOBUF_LIBRARIES})
