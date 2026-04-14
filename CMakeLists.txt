cmake_minimum_required(VERSION 4.1)
project(CS442_assignment_8)

set(CMAKE_CXX_STANDARD 20)

add_executable(CS442_assignment_8 main.cpp
        matrix_operations.cpp
        matrix_operations.h
        dynamic_arrays.cpp
        dynamic_arrays.h)
