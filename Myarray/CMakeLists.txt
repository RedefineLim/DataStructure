cmake_minimum_required(VERSION 3.24)

project(Project07 CXX)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Project07
        MyArray.hpp
        MyArray.cpp)
