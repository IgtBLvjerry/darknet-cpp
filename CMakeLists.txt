cmake_minimum_required(VERSION 3.10)
project(darknet_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(darknet_cpp main.cpp src/darknet-cpp.cpp src/tree.cpp src/tree.h src/list.cpp src/list.h src/option_list.cpp src/option_list.h src/utils.cpp src/utils.h src/data.cpp src/data.h src/matrix.cpp src/matrix.h src/unistd.h src/gettimeofday.h src/gettimeofday.c include/darknet.h)