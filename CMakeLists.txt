cmake_minimum_required(VERSION 3.25)
project(LearnC)

set(CMAKE_CXX_STANDARD 20)

add_executable(LearnC main.cpp
        cmake-build-debug/Rectangle.cpp
        cmake-build-debug/Rectangle.h
)
