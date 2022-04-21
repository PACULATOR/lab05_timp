cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(bankin)
add_library(bankin STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Account.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Transaction.cpp)
