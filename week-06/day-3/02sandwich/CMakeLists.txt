cmake_minimum_required(VERSION 3.13)
project(02sandwich C)

set(CMAKE_C_STANDARD 11)

add_executable(02sandwich main.c sandwich.h sandwich.c)