cmake_minimum_required(VERSION 3.13)
project(garden)

set(CMAKE_CXX_STANDARD 14)

add_executable(garden main.cpp plant.cpp plant.h tree.cpp tree.h flower.cpp flower.h garden.cpp garden.h)