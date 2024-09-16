cmake_minimum_required(VERSION 3.22)
project(simple_cnn C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_cnn main.c
        neural.h
        neural.c)


target_link_libraries(simple_cnn m)