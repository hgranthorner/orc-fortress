//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_RECTANGLE_H
#define ORC_FORTRESS_RECTANGLE_H


#include <SDL.h>

struct Color {
    Color(int r, int g, int b, int a);

    int r;
    int g;
    int b;
    int a;
};

namespace Colors {
    const auto RED = Color(255, 0, 0, 255);
    const auto GREEN = Color(0, 255, 0, 255);
    const auto BLUE = Color(0, 0, 255, 255);
    const auto BLACK = Color(0, 0, 0, 255);
}

struct Rectangle {
    Rectangle();
    Rectangle(const Color &color, int x, int y, int w, int h);

    Color color;
    int x;
    int y;
    int w;
    int h;
};


#endif //ORC_FORTRESS_RECTANGLE_H
