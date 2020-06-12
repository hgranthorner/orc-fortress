//
// Created by Grant Horner on 6/12/20.
//

#include "Game.h"
#include "Rectangle.h"

void Game::Run() {
    _sdlWrapper.InitSDL(_gameName,
                        _gameWidth,
                        _gameHeight);

    _orcs.emplace_back(Colors::RED);

    while (_isRunning) _runGameLoop();

}

void Game::_runGameLoop() {
    _sdlWrapper.ClearScreen();
    auto start = _sdlWrapper.GetTicks();

    SDL_Event event;
    if (_sdlWrapper.PollEvent(event)) {
        _inputHandler.HandleInput(event, _isRunning);
    }

    for (auto &orc:_orcs) {
        _sdlWrapper.DrawRectangle(orc.Rect);
    }

    auto end = _sdlWrapper.GetTicks();
    _sdlWrapper.DelayGame(start, end, _fps);
    _sdlWrapper.RenderGame();
}