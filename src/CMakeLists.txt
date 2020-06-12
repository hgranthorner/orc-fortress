add_library(Orc-Lib helper.cpp helper.h EventHandler.cpp EventHandler.h)
add_executable(Orc-Fortress main.cpp)
target_include_directories(Orc-Lib PUBLIC ./sdl_wrapper)
target_link_libraries(Orc-Fortress Orc-Lib SDL_Wrapper)