//
// Created by Grant Horner on 6/12/20.
//

#include "SDLGrid.h"

void SDLGrid::Reset(int height, int width) {
    this->assign(height, std::vector<Rectangle>(width, Rectangle()));
    for (int y = 0; y < this->size(); ++y) {
        auto row = &this->at(y);
        for (int x = 0; x < row->size(); ++x) {
            auto rect = &row->at(x);
            rect->y = y;
            rect->x = x;
        }
    }
}
