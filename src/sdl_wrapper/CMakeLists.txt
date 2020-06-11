add_library(SDL_Wrapper wrapper.cpp wrapper.h)
target_include_directories(SDL_Wrapper PUBLIC ../../libs/SDL2)
target_link_libraries(SDL_Wrapper SDL2)
