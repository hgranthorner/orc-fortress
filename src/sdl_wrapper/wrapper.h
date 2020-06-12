//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_WRAPPER_H
#define ORC_FORTRESS_WRAPPER_H

#include "SDL.h"
#include <string>

struct SDLDeleter {
    void operator()(SDL_Window *p) const { SDL_DestroyWindow(p); }

    void operator()(SDL_Renderer *p) const { SDL_DestroyRenderer(p); }

    void operator()(SDL_Texture *p) const { SDL_DestroyTexture(p); }
};

typedef void (* HandleEvent)(SDL_Event event);

class SDLWrapper {
public:
    SDLWrapper();

    std::unique_ptr<SDL_Window, SDLDeleter> Window;
    std::unique_ptr<SDL_Renderer, SDLDeleter> Renderer;

    void InitSDL(const std::string& name, int width, int height);
    void PollEvent(HandleEvent handler, const int render_timer) const;
};


#endif //ORC_FORTRESS_WRAPPER_H
