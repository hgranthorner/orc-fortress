//
// Created by Grant Horner on 6/11/20.
//

#include "SDLWrapper.h"
#include <stdexcept>
#include <algorithm>
#include <Consts.h>

void SDLWrapper::InitSDL(const std::string &name, int width, int height) {
    auto cell_size = Consts::CELL_SIZE;
    if (height % cell_size != 0)
        throw std::invalid_argument("Height needs to be a multiple of " + std::to_string(cell_size));
    if (width % cell_size != 0)
        throw std::invalid_argument("Width needs to be a multiple of " + std::to_string(cell_size));

    if (SDL_Init(SDL_INIT_VIDEO) != 0) throw std::runtime_error("Failed to initialize SDL");

    this->window_ = std::unique_ptr<SDL_Window, SDLDeleter>(
            SDL_CreateWindow(
                    name.c_str(),
                    SDL_WINDOWPOS_CENTERED,
                    SDL_WINDOWPOS_CENTERED,
                    width,
                    height,
                    SDL_WINDOW_OPENGL),
            SDLDeleter());
    if (!this->window_) throw std::runtime_error("Failed to create window");

    this->renderer_ = std::unique_ptr<SDL_Renderer, SDLDeleter>(
            SDL_CreateRenderer(
                    this->window_.get(),
                    -1,
                    SDL_RENDERER_ACCELERATED
                    | SDL_RENDERER_PRESENTVSYNC),
            SDLDeleter());
    if (!this->renderer_) throw std::runtime_error("Failed to create renderer");
    const int widthInCells = width / cell_size;
    const int heightInCells = height / cell_size;
    this->grid_.Reset(widthInCells, heightInCells);
}

void SDLWrapper::ClearScreen() {
    SDL_SetRenderDrawColor(this->renderer_.get(), 0, 0, 0, 255);
    SDL_RenderClear(this->renderer_.get());
}

int SDLWrapper::GetTicks() {
    return SDL_GetTicks();
}

void SDLWrapper::DelayGame(int start, int end, int fps) {
    SDL_Delay(std::max(10, fps - (end - start)));
}

void SDLWrapper::RenderGame() {
    SDL_RenderPresent(this->renderer_.get());
}

int SDLWrapper::PollEvent(SDL_Event &event) {
    return SDL_PollEvent(&event);
}

void SDLWrapper::DrawRectangle(Rectangle &rect) {
    auto sdl_rect = SDL_Rect{rect.x, rect.y, rect.h, rect.w};
    SDL_SetRenderDrawColor(this->renderer_.get(),
                           rect.color.r,
                           rect.color.g,
                           rect.color.b,
                           rect.color.a);
    SDL_RenderFillRect(this->renderer_.get(),
                       &sdl_rect);
}

