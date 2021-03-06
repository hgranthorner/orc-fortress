//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_SDLWRAPPER_H
#define ORC_FORTRESS_SDLWRAPPER_H

#include "SDLDeleter.h"
#include "Rectangle.h"
#include "SDLGrid.h"
#include <string>

class SDLWrapper {
public:
    void InitSDL(const std::string &name, int width, int height);

    void ClearScreen();

    int GetTicks();

    void DelayGame(int start, int end, int fps);

    void RenderGame();

    void DrawRectangle(Rectangle &rect);

    int PollEvent(SDL_Event &event);

private:
    std::unique_ptr<SDL_Window, SDLDeleter> window_;
    std::unique_ptr<SDL_Renderer, SDLDeleter> renderer_;
    SDLGrid grid_;
};


#endif //ORC_FORTRESS_SDLWRAPPER_H
