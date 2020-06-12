//
// Created by Grant Horner on 6/11/20.
//

#include "InputHandler.h"

void InputHandler::HandleInput(SDL_Event event, bool &running) {
    if (event.type == SDL_KEYDOWN) {
        if (event.key.keysym.scancode == SDL_SCANCODE_Q) {
            running = false;
        }
    }
}
