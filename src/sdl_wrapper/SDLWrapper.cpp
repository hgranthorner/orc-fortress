//
// Created by Grant Horner on 6/11/20.
//

#include "SDLWrapper.h"
#include <stdexcept>
#include <algorithm>

void SDLWrapper::InitSDL(const std::string &name, int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) throw std::runtime_error("Failed to initialize SDL");

    this->_window = std::unique_ptr<SDL_Window, SDLDeleter>(
            SDL_CreateWindow(
                    name.c_str(),
                    SDL_WINDOWPOS_CENTERED,
                    SDL_WINDOWPOS_CENTERED,
                    width,
                    height,
                    SDL_WINDOW_OPENGL),
            SDLDeleter());
    if (!this->_window) throw std::runtime_error("Failed to create window");

    this->_renderer = std::unique_ptr<SDL_Renderer, SDLDeleter>(
            SDL_CreateRenderer(
                    this->_window.get(),
                    -1,
                    SDL_RENDERER_ACCELERATED
                    | SDL_RENDERER_PRESENTVSYNC),
            SDLDeleter());
    if (!this->_renderer) throw std::runtime_error("Failed to create renderer");
}

void SDLWrapper::ClearScreen() {
    SDL_SetRenderDrawColor(this->_renderer.get(), 0, 0, 0, 255);
    SDL_RenderClear(this->_renderer.get());
}

int SDLWrapper::GetTicks() {
    return SDL_GetTicks();
}

void SDLWrapper::DelayGame(int start, int end, int fps) {
    SDL_Delay(std::max(10, fps - (end - start)));
}

void SDLWrapper::RenderGame() {
    SDL_RenderPresent(this->_renderer.get());
}

int SDLWrapper::PollEvent(SDL_Event &event) {
    return SDL_PollEvent(&event);
}

void SDLWrapper::DrawRectangle(Rectangle &rect) {
    SDL_SetRenderDrawColor(this->_renderer.get(),
                           rect.color.r,
                           rect.color.g,
                           rect.color.b,
                           rect.color.a);
    SDL_RenderFillRect(this->_renderer.get(),
                       &rect.shape);
}

