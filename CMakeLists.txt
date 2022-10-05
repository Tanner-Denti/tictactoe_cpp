cmake_minimum_required(VERSION 3.23)
project(module_one_cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(module_one_cpp main.cpp Game/Director.cpp Game/Director.h Game/GameBoard.cpp Game/GameBoard.h)
