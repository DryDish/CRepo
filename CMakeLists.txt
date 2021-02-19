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
        1-6/exercises1-6.h 7-11/exercises7-11.h 7-11/exercise7.c main.c decoration/decoration.c decoration/decoration.h 7-11/exercise8.c 7-11/exercise9.c 7-11/exercise10.c 12-16/exercises12-16.h 12-16/exercise12.c 12-16/exercise13.c 12-16/exercise14.c 12-16/exercise15.c 12-16/exercise16.c 17-22/exercise17.c 17-22/exercise17.h 17-22/exercise18.c 17-22/exercise18.h 17-22/exercises17-22.h 17-22/exercise19.c 17-22/exercise19.h 17-22/exercise20.c 17-22/exercise20.h)
