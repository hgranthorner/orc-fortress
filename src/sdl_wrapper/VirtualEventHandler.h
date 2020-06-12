//
// Created by Grant Horner on 6/11/20.
//

#ifndef ORC_FORTRESS_VIRTUALEVENTHANDLER_H
#define ORC_FORTRESS_VIRTUALEVENTHANDLER_H

#include "SDL.h"

class VirtualEventHandler {
public:
    virtual void HandleInput(SDL_Event event, bool &running) = 0;
};

#endif //ORC_FORTRESS_VIRTUALEVENTHANDLER_H
