cmake_minimum_required(VERSION 3.24)
project(BinaryHomework C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(BinaryHomework
        Heap.c
        Heap.h
        Test.c)
