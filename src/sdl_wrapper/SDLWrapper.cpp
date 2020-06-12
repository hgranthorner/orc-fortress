//
// Created by Grant Horner on 6/11/20.
//

#include "SDLWrapper.h"
#include "VirtualEventHandler.h"
#include "SDLDeleter.h"
#include <stdexcept>
#include <algorithm>

void SDLWrapper::InitSDL(const std::string &name, int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) throw std::runtime_error("Failed to initialize SDL");

    this->Window = std::unique_ptr<SDL_Window, SDLDeleter>(
            SDL_CreateWindow(
                    name.c_str(),
                    SDL_WINDOWPOS_CENTERED,
                    SDL_WINDOWPOS_CENTERED,
                    width,
                    height,
                    SDL_WINDOW_OPENGL),
            SDLDeleter());
    if (!this->Window) throw std::runtime_error("Failed to create window");

    this->Renderer = std::unique_ptr<SDL_Renderer, SDLDeleter>(
            SDL_CreateRenderer(
                    this->Window.get(),
                    -1,
                    SDL_RENDERER_ACCELERATED
                    | SDL_RENDERER_PRESENTVSYNC),
            SDLDeleter());
    if (!this->Renderer) throw std::runtime_error("Failed to create renderer");
}

SDLWrapper::SDLWrapper() = default;

void SDLWrapper::HandleUserInput(VirtualEventHandler &handler, int render_timer) const {
    SDL_Event event;
    SDL_SetRenderDrawColor(this->Renderer.get(), 0, 0, 0, 255);
    SDL_RenderClear(this->Renderer.get());
    const int start_frame_time = SDL_GetTicks();
    if (SDL_PollEvent(&event)) handler.HandleInput(event);
    const int end_frame_time = SDL_GetTicks();
    SDL_Delay(std::max(10, render_timer - (end_frame_time - start_frame_time)));
    SDL_RenderPresent(this->Renderer.get());
}
