cmake_minimum_required(VERSION 3.0)
project(banking)

set(CMAKE_CXX_STANDARD 14)

add_executable(banking ${CMAKE_CURRENT_SOURCE_DIR}/banking/Account.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/banking/Transaction.cpp Google_tests/test.cpp)
add_subdirectory(Google_tests)
enable_testing()
