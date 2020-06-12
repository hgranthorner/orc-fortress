//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_INPUTHANDLER_H
#define ORC_FORTRESS_INPUTHANDLER_H

#include "SDLWrapper.h"
#include "VirtualEventHandler.h"

class InputHandler : public VirtualEventHandler {
public:
    explicit InputHandler();

    void HandleInput(SDL_Event event) override;

    std::shared_ptr<bool> running = std::make_shared<bool>(true);
};


#endif //ORC_FORTRESS_INPUTHANDLER_H
