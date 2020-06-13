add_library(Models
        Orc.cpp Orc.h
        Prey.cpp Prey.h)
target_include_directories(Models
        PUBLIC ../sdl_wrapper
        PUBLIC ../consts
        PUBLIC ../utils)
target_link_libraries(Models SDL_Wrapper Consts Utils)