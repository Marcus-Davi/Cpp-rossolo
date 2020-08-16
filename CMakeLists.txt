cmake_minimum_required(VERSION 3.8)
project (rossolo)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(roscpp)
include_directories(${roscpp_INCLUDE_DIRS})

add_executable(rossolo src/rossolo.cpp)
target_link_libraries(rossolo ${roscpp_LIBRARIES})



