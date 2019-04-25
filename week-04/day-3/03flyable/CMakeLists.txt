cmake_minimum_required(VERSION 3.13)
project(03flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(03flyable main.cpp flyable.cpp flyable.h vehicle.cpp vehicle.h animal.cpp animal.h helicopter.cpp helicopter.h bird.cpp bird.h)