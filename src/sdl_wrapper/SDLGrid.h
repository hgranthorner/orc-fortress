//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_SDLGRID_H
#define ORC_FORTRESS_SDLGRID_H


#include <vector>
#include "Rectangle.h"

class SDLGrid : public std::vector<std::vector<Rectangle>> {
public:
    void Reset(int height, int width);
};


#endif //ORC_FORTRESS_SDLGRID_H
