cmake_minimum_required(VERSION 3.10)
project(darknet_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(darknet_cpp main.cpp darknet-cpp.cpp tree.cpp tree.h list.cpp list.h option_list.cpp option_list.h utils.cpp utils.h data.cpp data.h matrix.cpp matrix.h unistd.h gettimeofday.h gettimeofday.c)