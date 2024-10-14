cmake_minimum_required(VERSION 3.24)
project(base)

set(CMAKE_CXX_STANDARD 23)

add_executable(base main.cpp)

add_executable(01.hello c/day01/01.hello.c)
add_executable(02 c/day01/02.cpp)