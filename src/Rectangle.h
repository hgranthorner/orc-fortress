//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_RECTANGLE_H
#define ORC_FORTRESS_RECTANGLE_H


#include <SDL.h>

struct Position {
    int x;
    int y;
};

struct Color {
    int r;
    int g;
    int b;
    int a;
};

struct Rectangle {
    Position position;
    Color color;
    SDL_Rect shape;
};


#endif //ORC_FORTRESS_RECTANGLE_H
