cmake_minimum_required(VERSION 3.13)
project(07blog)

set(CMAKE_CXX_STANDARD 14)

add_executable(07blog main.cpp blogPost.cpp blogPost.h blog.cpp blog.h)