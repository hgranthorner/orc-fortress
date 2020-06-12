//
// Created by Grant Horner on 6/11/20.
//

#include "InputHandler.h"

void InputHandler::HandleInput(SDL_Event event, bool &running, std::vector<Prey> &prey) {
    if (event.type == SDL_KEYDOWN) {
        SDL_Scancode code = event.key.keysym.scancode;
        if (code == SDL_SCANCODE_Q) {
            running = false;
        }
        if (code == SDL_SCANCODE_R) {
            prey.emplace_back();
        }
    }
}
