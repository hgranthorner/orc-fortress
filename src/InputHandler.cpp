//
// Created by Grant Horner on 6/11/20.
//

#include "InputHandler.h"

void InputHandler::HandleInput(SDL_EventType type, SDL_Scancode code, bool &running, std::vector<Prey> &prey) {
    if (type == SDL_KEYDOWN) {
        if (code == SDL_SCANCODE_Q) {
            running = false;
        }
        if (code == SDL_SCANCODE_R) {
            prey.emplace_back();
        }
    }
}
