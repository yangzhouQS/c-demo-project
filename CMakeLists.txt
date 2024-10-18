cmake_minimum_required(VERSION 3.24)
project(base)

set(CMAKE_CXX_STANDARD 23)

add_executable(base main.cpp)

add_executable(01.hello c/day01/01.hello.c c/day02/scanf_unc.c c/day02/freezing_point.c c/day02/dbg.c c/day02/05.char.c c/day02/demo..c
        c/day02/01.const.c)
add_executable(02 c/day01/02.cpp)
add_executable(scanf_unc c/day02/scanf_unc.c)
add_executable(freezing_point c/day02/freezing_point.c)
add_executable(dbg c/day02/dbg.c)

add_executable(04.flot.double c/day02/04.flot.double.c)
add_executable(05.char c/day02/05.char.c)
add_executable(demo. c/day02/demo..c)
add_executable(01.const c/day02/01.const.c)
add_executable(02.type_convert c/day03/02.type_convert.c)
add_executable(03.bool c/day03/03.bool.c)