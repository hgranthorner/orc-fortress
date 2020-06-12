//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_INPUTHANDLER_H
#define ORC_FORTRESS_INPUTHANDLER_H

#include "SDLWrapper.h"
#include <vector>

class InputHandler {
public:
    void HandleInput(SDL_Event event, bool &running);
};


#endif //ORC_FORTRESS_INPUTHANDLER_H
