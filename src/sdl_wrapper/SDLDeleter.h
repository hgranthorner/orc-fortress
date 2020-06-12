//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_SDLDELETER_H
#define ORC_FORTRESS_SDLDELETER_H

#include <SDL.h>

struct SDLDeleter {
    void operator()(SDL_Window *p) const { SDL_DestroyWindow(p); }

    void operator()(SDL_Renderer *p) const { SDL_DestroyRenderer(p); }

    void operator()(SDL_Texture *p) const { SDL_DestroyTexture(p); }
};

#endif //ORC_FORTRESS_SDLDELETER_H
