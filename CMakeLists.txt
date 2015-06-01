cmake_minimum_required(VERSION 3.5)
project(c_projects)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES "Η Γλωσσα C σε βαθος - Χατζηγιαννακης/test.c")
add_executable(untitled1 ${SOURCE_FILES})