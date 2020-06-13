//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_SDLGRID_H
#define ORC_FORTRESS_SDLGRID_H


#include <vector>
#include "Rectangle.h"

class SDLGrid : public std::vector<std::vector<Rectangle>> {
public:
    SDLGrid();

    SDLGrid(int width, int height);

    void Reset();
    void Push(Rectangle &rect);
    void Update(Rectangle &rect);

private:
    int width_;
    int height_;
};


#endif //ORC_FORTRESS_SDLGRID_H
