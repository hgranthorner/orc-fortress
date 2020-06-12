//
// Created by Grant Horner on 6/12/20.
//

#include "Game.h"
#include "Rectangle.h"
#include "Consts.h"

void Game::Run() {
    _sdlWrapper.InitSDL(_gameName,
                        Consts::WIDTH,
                        Consts::HEIGHT);

    _orcs.emplace_back(Colors::RED);
    _prey.emplace_back();

    while (_isRunning) _runGameLoop();
}

void Game::_runGameLoop() {
    _sdlWrapper.ClearScreen();
    auto start = _sdlWrapper.GetTicks();

    SDL_Event event;
    if (_sdlWrapper.PollEvent(event)) {
        _inputHandler.HandleInput(event, _isRunning, _prey);
    }

    for (auto &orc:_orcs) {
        _sdlWrapper.DrawRectangle(orc);
    }

    auto end = _sdlWrapper.GetTicks();
    _sdlWrapper.DelayGame(start, end, Consts::FPS);
    _sdlWrapper.RenderGame();
}

