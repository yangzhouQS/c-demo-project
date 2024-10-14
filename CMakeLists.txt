cmake_minimum_required(VERSION 3.24)
project(base)

set(CMAKE_CXX_STANDARD 23)

add_executable(base main.cpp )

add_executable(03 day01/03.c)
add_executable(01.const day02/01.const.c)
add_executable(01 day01/01.cpp )

add_executable(02.sphere 1-type-io/02.sphere.c)
add_executable(03.mol 1-type-io/03.mol.c)
add_executable(04.admin 1-type-io/04.admin.c)

add_executable(001 day01/001.c day02/02.int.c c_plus/func/func_01.cpp c_plus/oop/demo02_circle.cpp c_plus/day02/input.cpp c_plus/oop2/demo01.cpp c_plus/oop2/demo02.cpp c_plus/oop2/screen.cpp)
add_executable(02.int day02/02.int.c)
add_executable(03.char day02/03.char.c)
add_executable(04.flot.double day02/04.flot.double.c)
add_executable(01.string day03/01.string.c)

add_executable(02.namespace c_plus/day01/02.namespace.cpp c_plus/day01/04.namespace.cpp c_plus/day01/05.C_Module.cpp c_plus/day01/externA.c c_plus/day01/06.const_variable.cpp)
add_executable(func_01 c_plus/func/func_01.cpp)
add_executable(func_02 c_plus/func/func_02.cpp)
add_executable(func_03_array_arg c_plus/func/func_03_array_arg.cpp)
add_executable(demo01_human c_plus/oop/demo01_human.cpp)
add_executable(demo02_circle c_plus/oop/demo02_circle.cpp)
add_executable(demo03_Student c_plus/oop/demo03_Student.cpp)


add_executable(03.hello c_plus/day01/03.hello.cpp)
add_executable(04.namespace c_plus/day01/04.namespace.cpp)
add_executable(05.C_Module c_plus/day01/05.C_Module.cpp)
add_executable(06.const_variable c_plus/day01/06.const_variable.cpp)
add_executable(input c_plus/day02/input.cpp)
add_executable(demo01 c_plus/oop2/demo01.cpp)
add_executable(demo02 c_plus/oop2/demo02.cpp)
add_executable(screen c_plus/oop2/screen.cpp)