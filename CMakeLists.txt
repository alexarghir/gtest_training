cmake_minimum_required(VERSION 3.10)
project(GTestTraining)

set(CMAKE_CXX_STANDARD 11)

include_directories(inc)
include_directories(mocks)
include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(lib/googletest)
