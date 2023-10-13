cmake_minimum_required(VERSION 3.0)
project(Queue)

set(CMAKE_CXX_STANDARD 14)

include_directories(include/Abstraction include/Implementer include/Test)

add_executable(Queue src/main.cpp src/BrideTest.cpp)
