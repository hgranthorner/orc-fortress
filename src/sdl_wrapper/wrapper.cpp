//
// Created by Grant Horner on 6/11/20.
//

#include "wrapper.h"
#include "SDL.h"
#include <stdexcept>
#include <string>

void SDLWrapper::InitSDL(const std::string &name, int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) throw std::runtime_error("Failed to initialize SDL");

    this->Window = std::unique_ptr<SDL_Window, SDLDeleter>(SDL_CreateWindow(name.c_str(),
                                                                            SDL_WINDOWPOS_CENTERED,
                                                                            SDL_WINDOWPOS_CENTERED,
                                                                            width,
                                                                            height,
                                                                            SDL_WINDOW_OPENGL), SDLDeleter());
}

SDLWrapper::SDLWrapper() {}
