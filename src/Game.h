//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_GAME_H
#define ORC_FORTRESS_GAME_H


#include <vector>
#include <Prey.h>
#include <Orc.h>
#include "InputHandler.h"

class Game {
public:
    void Run();

private:
    SDLWrapper _sdlWrapper;
    bool _isRunning = true;
    std::string _gameName = "Orc Fortress";

    std::vector<Orc> _orcs;
    std::vector<Prey> _prey;

    void _runGameLoop();

};


#endif //ORC_FORTRESS_GAME_H
