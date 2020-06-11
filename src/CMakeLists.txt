add_library(Orc-Lib helper.cpp helper.h)
add_executable(Orc-Fortress main.cpp)
target_link_libraries(Orc-Fortress Orc-Lib SDL_Wrapper)