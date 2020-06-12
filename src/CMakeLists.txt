add_library(Orc-Lib
        InputHandler.cpp InputHandler.h
        Game.cpp Game.h)
add_executable(Orc-Fortress main.cpp)
target_include_directories(Orc-Lib
        PUBLIC ./sdl_wrapper
        PUBLIC ./consts
        PUBLIC ./models)
target_link_libraries(Orc-Lib SDL_Wrapper Consts Models)
target_link_libraries(Orc-Fortress Orc-Lib SDL_Wrapper)