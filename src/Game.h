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
    SDLWrapper sdl_wrapper_;
    Targeter targeter_;
    bool is_running_ = true;
    std::string game_name_ = "Orc Fortress";

    std::vector<Orc> orcs_;
    std::vector<Prey> prey_;

    void RunGameLoop();
};


#endif //ORC_FORTRESS_GAME_H
