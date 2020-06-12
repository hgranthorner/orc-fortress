add_library(SDL_Wrapper
        SDLWrapper.cpp SDLWrapper.h
        SDLDeleter.h SDLDeleter.cpp
        Rectangle.cpp Rectangle.h)
target_include_directories(SDL_Wrapper PUBLIC ../../libs/SDL2)
target_link_libraries(SDL_Wrapper SDL2)
