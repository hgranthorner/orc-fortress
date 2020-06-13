//
// Created by Grant Horner on 6/12/20.
//

#include "SDLGrid.h"

void SDLGrid::Reset() {
    data_.assign(height_, std::vector<Rectangle>(width_, Rectangle()));
    for (int y = 0; y < data_.size(); ++y) {
        auto row = &data_.at(y);
        for (int x = 0; x < row->size(); ++x) {
            auto rect = &row->at(x);
            rect->y = y;
            rect->x = x;
        }
    }
}

SDLGrid::SDLGrid(int width, int height) :
        width_(width),
        height_(height),
        map_(PositionMap()),
        data_(std::vector<std::vector<Rectangle>>()) {}

SDLGrid::SDLGrid() :
        width_(0),
        height_(0),
        map_(PositionMap()),
        data_(std::vector<std::vector<Rectangle>>()) {}

Rectangle SDLGrid::Get(int x, int y) {
    return data_.at(y).at(x);
}

void SDLGrid::Upsert(Rectangle &rect) {
    if (map_.CheckIfExists(rect.id)) {
        auto pos = map_.Get(rect.id);
        data_[pos.y][pos.x] = Rectangle();
    }
    map_.Add(rect.id, rect);
    data_.at(rect.y).at(rect.x) = rect;
}

int SDLGrid::GetHeight() {
    return data_.size();
}

int SDLGrid::GetWidth() {
    if (!data_.empty())
        return data_.at(0).size();
}

std::vector<Rectangle> SDLGrid::GetRow(int y) {
    return data_.at(y);
}
