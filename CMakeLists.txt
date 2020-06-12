cmake_minimum_required(VERSION 3.16)
project(orc_fortress)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(libs/SDL2)
add_subdirectory(libs/catch)
add_subdirectory(src/consts)
add_subdirectory(src/sdl_wrapper)
add_subdirectory(src/models)
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
