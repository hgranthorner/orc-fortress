//
// Created by Grant Horner on 6/12/20.
//

#include "Rectangle.h"

Color::Color(int r, int g, int b, int a) : r(r), g(g), b(b), a(a) {}

bool Color::operator==(Color color2) const {
    return this->a == color2.a &&
        this->b == color2.b &&
        this->g == color2.g &&
        this->a == color2.a;
}

Rectangle::Rectangle(const Color &color, int x, int y, int w, int h) : color(color), x(x), y(y), w(w), h(h) {}

Rectangle::Rectangle() : color(Colors::BLACK), x(-1), y(-1), w(1), h(1) {}
