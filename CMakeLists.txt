cmake_minimum_required(VERSION 3.8)
project(calculator CXX)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE CALC_SOURCES "src/CalcManager/*.cpp")
add_library(calc ${CALC_SOURCES})
target_include_directories(calc PUBLIC "src/CalcManager")
