cmake_minimum_required(VERSION 3.16)
project(orc_fortress)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)
add_subdirectory(libs/catch)

enable_testing()
add_subdirectory(tests)
