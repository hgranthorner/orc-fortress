add_library(Orc_Lib
        InputHandler.cpp InputHandler.h
        Game.cpp Game.h)
add_executable(Orc_Fortress main.cpp)
target_include_directories(Orc_Lib
        PUBLIC ./sdl_wrapper
        PUBLIC ./consts
        PUBLIC ./models)
target_link_libraries(Orc_Lib SDL_Wrapper Consts Models)
target_link_libraries(Orc_Fortress Orc_Lib SDL_Wrapper)