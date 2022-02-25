cmake_minimum_required(VERSION 3.21)
project(WDProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(WDProject main.cpp)

add_executable(w1d2 WDWork/w1d2.cpp)
add_executable(w1d3 WDWork/w1d3.cpp)
add_executable(w2d4 WDWork/w2d4.cpp)
add_executable(w2d5 WDWork/w2d5.cpp)
add_executable(KMP_next Study/KMP_next.cpp)