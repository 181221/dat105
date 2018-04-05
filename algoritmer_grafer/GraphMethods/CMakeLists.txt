cmake_minimum_required(VERSION 3.9)
project(Graph)

set(CMAKE_CXX_STANDARD 14)

add_executable( Graph main.cpp graf/edge.h graf/graph.h graf/graphadt.h graf/node.h koe/PriorityQueue.h koe/Enode.h koe/Enode.cpp koe/PriorityQueue.cpp graf/edge.cpp)