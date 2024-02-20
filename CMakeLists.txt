cmake_minimum_required(VERSION 3.27)
project(CH08LINKEDLIST)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH08LINKEDLIST main.cpp
        IntNode.cpp
        IntNode.h
        IntList.cpp
        IntList.h)
