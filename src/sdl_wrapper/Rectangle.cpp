//
// Created by Grant Horner on 6/12/20.
//

#include "Rectangle.h"

Color::Color(int r, int g, int b, int a) : r(r), g(g), b(b), a(a) {}

Rectangle::Rectangle(const Color &color, int x, int y, int w, int h) : color(color), x(x), y(y), w(w), h(h) {}

Rectangle::Rectangle() : color(Colors::BLACK), x(-1), y(-1), w(1), h(1) {}
