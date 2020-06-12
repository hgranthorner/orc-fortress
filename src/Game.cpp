//
// Created by Grant Horner on 6/12/20.
//

#include "Game.h"
#include "Rectangle.h"
#include "Consts.h"

void Game::Run() {
    sdl_wrapper_.InitSDL(game_name_,
                         Consts::WIDTH,
                         Consts::HEIGHT);

    orcs_.emplace_back(Colors::RED);
    prey_.emplace_back();

    while (is_running_) RunGameLoop();
}

void Game::RunGameLoop() {
    sdl_wrapper_.ClearScreen();
    auto start = sdl_wrapper_.GetTicks();

    SDL_Event event;
    if (sdl_wrapper_.PollEvent(event)) {
        InputHandler::HandleInput(static_cast<SDL_EventType>(event.type),
                                  event.key.keysym.scancode,
                                  is_running_,
                                  prey_);
    }

    for (auto &prey:prey_) {
        sdl_wrapper_.DrawRectangle(prey);
    }

    for (auto &orc:orcs_) {
        sdl_wrapper_.DrawRectangle(orc);
    }

    auto end = sdl_wrapper_.GetTicks();
    sdl_wrapper_.DelayGame(start, end, Consts::FPS);
    sdl_wrapper_.RenderGame();
}

