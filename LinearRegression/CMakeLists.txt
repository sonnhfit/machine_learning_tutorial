cmake_minimum_required(VERSION 3.1)
project(LinearRegression)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILE main.cpp)

add_executable(LinearRegression ${SOURCE_FILE} LinearRegression.cpp LinearRegression.h Utils.cpp Utils.h)
