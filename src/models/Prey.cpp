//
// Created by Grant Horner on 6/12/20.
//

#include <Consts.h>
#include "Prey.h"

Prey::Prey(int x, int y) : Rectangle(Colors::GREEN,
                         x == -1 ? rand() % (Consts::WIDTH / Consts::CELL_SIZE) : x,
                         y == -1 ? rand() % (Consts::HEIGHT / Consts::CELL_SIZE) : y,
                         1,
                         1) {}
