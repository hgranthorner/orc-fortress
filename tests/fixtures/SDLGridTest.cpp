//
// Created by Grant Horner on 6/12/20.
//

#include <sdl_wrapper/SDLGrid.h>
#include "SDLGridTest.h"

void SDLGridTest::SetUp() {
    Test::SetUp();

    grid_ = SDLGrid();
    rand_height_ = rand() % 100;
    rand_width_ = rand() % 100;
}
