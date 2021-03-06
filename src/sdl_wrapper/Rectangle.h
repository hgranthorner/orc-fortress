//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_RECTANGLE_H
#define ORC_FORTRESS_RECTANGLE_H


#include <SDL.h>
#include <Position.h>
#include <ID.h>

struct Color {
    Color(int r, int g, int b, int a);

    int r;
    int g;
    int b;
    int a;

    bool operator==(Color color2) const;
};

namespace Colors {
    const auto RED = Color(255, 0, 0, 255);
    const auto GREEN = Color(0, 255, 0, 255);
    const auto BLUE = Color(0, 0, 255, 255);
    const auto BLACK = Color(0, 0, 0, 255);
}

struct Rectangle : public Position {
    Rectangle();
    Rectangle(const Color &color, int x, int y, int w = 1, int h = 1);
    ID id;
    Color color;
    int w;
    int h;
};


#endif //ORC_FORTRESS_RECTANGLE_H
