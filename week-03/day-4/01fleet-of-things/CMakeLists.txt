cmake_minimum_required(VERSION 3.13)
project(01fleet_of_things)

set(CMAKE_CXX_STANDARD 14)

add_executable(01fleet_of_things main.cpp thing.cpp thing.h fleet.cpp fleet.h)