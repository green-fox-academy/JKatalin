cmake_minimum_required(VERSION 3.13)
project(11odd_or_even C)

set(CMAKE_C_STANDARD 11)

add_executable(11odd_or_even main.c even.c even.h)