cmake_minimum_required(VERSION 3.0)

project(SKIPLISTS)

include_directories(include)

add_executable(Skiplists skiplist_exe src/Node.cpp src/Skiplist.cpp)