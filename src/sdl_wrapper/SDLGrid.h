//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_SDLGRID_H
#define ORC_FORTRESS_SDLGRID_H


#include <vector>
#include <unordered_map>
#include <Position.h>
#include <PositionMap.h>
#include "Rectangle.h"

class SDLGrid {
public:
    SDLGrid();

    SDLGrid(int width, int height);

    Rectangle Get(int x, int y);
    std::vector<Rectangle> GetRow(int y);
    void Reset();
    void Upsert(Rectangle &rect);
    int GetHeight();
    int GetWidth();
private:
    std::vector<std::vector<Rectangle>> data_;
    PositionMap map_;
    int width_;
    int height_;
};


#endif //ORC_FORTRESS_SDLGRID_H
