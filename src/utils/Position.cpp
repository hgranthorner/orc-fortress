//
// Created by Grant Horner on 6/13/20.
//

#include "Position.h"

Position::Position() {
    x = -1;
    y = -1;
}

Position::Position(int x, int y) : x(x), y(y) {}

bool Position::operator==(const Position &rhs) const {
    return x == rhs.x &&
           y == rhs.y;
}

bool Position::operator!=(const Position &rhs) const {
    return !(rhs == *this);
}
