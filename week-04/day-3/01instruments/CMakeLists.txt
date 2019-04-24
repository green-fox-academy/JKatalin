cmake_minimum_required(VERSION 3.13)
project(01instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(01instruments main.cpp instruments.cpp instruments.h stringedInstruments.cpp stringedInstruments.h electricGuitar.cpp electricGuitar.h bassGuitar.cpp bassGuitar.h violin.cpp violin.h)