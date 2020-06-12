//
// Created by Grant Horner on 6/12/20.
//

#include "Rectangle.h"

Color::Color(int r, int g, int b, int a) : r(r), g(g), b(b), a(a) {}

Rectangle::Rectangle(const Color &color, int x, int y, int w, int h) : color(color), shape(SDL_Rect{x, y, w, h}) {}
