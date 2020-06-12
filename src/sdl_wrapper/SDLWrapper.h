//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_SDLWRAPPER_H
#define ORC_FORTRESS_SDLWRAPPER_H

#include "VirtualEventHandler.h"
#include "SDLDeleter.h"
#include <string>

class SDLWrapper {
public:
    SDLWrapper();

    void InitSDL(const std::string &name, int width, int height);

    void HandleUserInput(const std::shared_ptr<VirtualEventHandler> &handler, int render_timer) const;

private:
    std::unique_ptr<SDL_Window, SDLDeleter> Window;
    std::unique_ptr<SDL_Renderer, SDLDeleter> Renderer;
};


#endif //ORC_FORTRESS_SDLWRAPPER_H
