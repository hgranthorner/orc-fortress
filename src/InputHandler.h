//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_INPUTHANDLER_H
#define ORC_FORTRESS_INPUTHANDLER_H

#include "SDLWrapper.h"
#include "VirtualEventHandler.h"

class InputHandler : public VirtualEventHandler {
public:
    void HandleInput(SDL_Event event, bool &running) override;
};


#endif //ORC_FORTRESS_INPUTHANDLER_H
