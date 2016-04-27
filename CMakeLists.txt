cmake_minimum_required(VERSION 3.5)
project(c_basics)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ex05.c)
add_executable(c_basics ${SOURCE_FILES})