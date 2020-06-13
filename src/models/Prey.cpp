//
// Created by Grant Horner on 6/12/20.
//

#include <Consts.h>
#include "Prey.h"

Prey::Prey() : Rectangle(Colors::GREEN,
                         rand() % (Consts::WIDTH / Consts::CELL_SIZE),
                         rand() % (Consts::HEIGHT / Consts::CELL_SIZE),
                         1,
                         1) {}
