cmake_minimum_required(VERSION 3.9)
project(PriorityQueue)

set(CMAKE_CXX_STANDARD 14)

add_executable(PriorityQueue main.cpp edge.h node.h PriorityQueue.cpp PriorityQueue.h Enode.cpp Enode.h)