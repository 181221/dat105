cmake_minimum_required(VERSION 3.9)
project(threads)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)
add_executable(threads main.cpp Delt.cpp Delt.h)