//
// Created by Grant Horner on 6/11/20.
//

#include "InputHandler.h"


InputHandler::InputHandler() = default;

void InputHandler::HandleInput(SDL_Event event) {
    if (event.type == SDL_KEYDOWN) {
        if (event.key.keysym.scancode == SDL_SCANCODE_Q) {
            *this->running = false;
        }
    }
}
