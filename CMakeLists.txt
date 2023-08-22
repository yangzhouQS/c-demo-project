cmake_minimum_required(VERSION 3.24)
project(base)

set(CMAKE_CXX_STANDARD 23)

add_executable(base main.cpp day01/001.c day01/02.cpp day01/03.c)

add_executable(03 day01/03.c)
add_executable(01.const day02/01.const.c)
add_executable(01 day01/01.cpp)

add_executable(02.sphere 1-type-io/02.sphere.c)
add_executable(03.mol 1-type-io/03.mol.c)
add_executable(04.admin 1-type-io/04.admin.c)

add_executable(001 day01/001.c day02/02.int.c)
add_executable(02.int day02/02.int.c)
add_executable(03.char day02/03.char.c)
add_executable(04.flot.double day02/04.flot.double.c)
add_executable(01.string day03/01.string.c)