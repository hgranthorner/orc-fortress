add_library(SDL_Wrapper SDLWrapper.cpp SDLWrapper.h VirtualEventHandler.cpp VirtualEventHandler.h SDLDeleter.h SDLDeleter.cpp)
target_include_directories(SDL_Wrapper PUBLIC ../../libs/SDL2)
target_link_libraries(SDL_Wrapper SDL2)
