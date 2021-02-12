cmake_minimum_required(VERSION 3.12)
project(Lambdas VERSION 1.0.0)

add_executable(lambdas lambdas.cpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)