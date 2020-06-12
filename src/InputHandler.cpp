//
// Created by Grant Horner on 6/11/20.
//

#include "InputHandler.h"



void InputHandler::HandleInput(SDL_Event event) {
    if (event.type == SDL_KEYDOWN) {
        if (event.key.keysym.scancode == SDL_SCANCODE_Q) {
            this->_running = false;
        }
    }
}

InputHandler::InputHandler(bool &running) : _running(running) {
}

bool InputHandler::isRunning() {
    return this->_running;
}
