cmake_minimum_required(VERSION 3.5)
project(untitled1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Sherlock_and_the_beast.cpp)
add_executable(untitled1 ${SOURCE_FILES})