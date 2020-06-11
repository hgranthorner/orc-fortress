cmake_minimum_required(VERSION 3.16)
project(orc_fortress)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)
add_subdirectory(src/sdl_wrapper)
add_subdirectory(libs/catch)
add_subdirectory(libs/SDL2)

enable_testing()
add_subdirectory(tests)
