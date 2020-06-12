//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_GAME_H
#define ORC_FORTRESS_GAME_H


#include <vector>
#include "InputHandler.h"
#include "Orc.h"

class Game {
public:
    void Run();

private:
    SDLWrapper _sdlWrapper;
    InputHandler _inputHandler;
    bool _isRunning = true;
    std::string _gameName = "Orc Fortress";
    int _gameWidth = 600;
    int _gameHeight = 600;
    int _fps = 60;
    std::vector<Orc> _orcs;

    void _runGameLoop();
};


#endif //ORC_FORTRESS_GAME_H
