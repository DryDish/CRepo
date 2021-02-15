cmake_minimum_required(VERSION 3.17)
project(c_repo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(1-6)

add_executable(c_repo
        1-6/exercise1.c
        1-6/exercise2.c
        1-6/exercise3.c
        1-6/exercise4.c
        1-6/exercise5.c
        1-6/exercise6.c
        1-6/exercises1-6.h 7-11/exercises7-11.h 7-11/exercise7.c main.c decoration/decoration.c decoration/decoration.h)
