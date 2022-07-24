cmake_minimum_required(VERSION 3.5)
project(ZeroMqFactory VERSION 0.1.0)

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

execute_process(COMMAND sh "${project_dir}/proto/run_me.sh")
file(GLOB PROTO_SRC ${project_dir}/proto/proto_source/*.cc)

add_library(${PROJECT_NAME} SHARED src/ValueZeroMqLib.cpp ${PROTO_SRC})
add_library(zeromq::factory ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE include/)
target_include_directories(${PROJECT_NAME} PRIVATE include/)
target_include_directories(${PROJECT_NAME} PUBLIC ${project_dir}/proto/proto_source)

target_link_libraries(${PROJECT_NAME} PUBLIC ${Boost_LIBRARIES} spdlog::spdlog m pthread ${ZMQ_LIBRARIES} ${PROTOBUF_LIBRARIES})

# include_directories(
# .
# ./include
# ${Boost_INCLUDE_DIRS}
# ${ZMQ_INCLUDE_DIR}
# ${project_dir}/proto/proto_source
# )

# file(GLOB PROTO_SRC ${project_dir}/proto/proto_source/*.cc)

# add_executable(
# ${PROJECT_NAME}
# ./src/ValueZeroMqLib.cpp
# ${PROTO_SRC} # 导入外部proto文件
# )

# target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} spdlog::spdlog m pthread ${ZMQ_LIBRARIES} ${PROTOBUF_LIBRARIES})
