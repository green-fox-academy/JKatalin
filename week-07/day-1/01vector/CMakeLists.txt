cmake_minimum_required(VERSION 3.13)
project(01vector C)

set(CMAKE_C_STANDARD 11)

add_executable(01vector main.c myvector.c myvector.h)