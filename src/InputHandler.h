//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_INPUTHANDLER_H
#define ORC_FORTRESS_INPUTHANDLER_H

#include "SDLWrapper.h"
#include "VirtualEventHandler.h"

class InputHandler : public VirtualEventHandler {
public:
    explicit InputHandler(bool &running);

    bool isRunning();
    void HandleInput(SDL_Event event) override;

private:
    bool &_running;
};


#endif //ORC_FORTRESS_INPUTHANDLER_H
