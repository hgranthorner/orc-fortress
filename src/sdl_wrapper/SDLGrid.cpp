//
// Created by Grant Horner on 6/12/20.
//

#include "SDLGrid.h"

void SDLGrid::Reset() {
    this->assign(height_, std::vector<Rectangle>(width_, Rectangle()));
    for (int y = 0; y < this->size(); ++y) {
        auto row = &this->at(y);
        for (int x = 0; x < row->size(); ++x) {
            auto rect = &row->at(x);
            rect->y = y;
            rect->x = x;
        }
    }
}

SDLGrid::SDLGrid(int width, int height) : width_(width),
                                          height_(height) {}

SDLGrid::SDLGrid() : width_(0), height_(0) {}

void SDLGrid::Push(Rectangle &rect) {
    this->at(rect.y).at(rect.x) = rect;
}

void SDLGrid::Update(Rectangle &rect) {

}
