//
// Created by Grant Horner on 6/12/20.
//

#include <Consts.h>
#include "Prey.h"

Prey::Prey() : Rectangle(Colors::GREEN,
                         rand() % Consts::WIDTH,
                         rand() % Consts::HEIGHT,
                         25,
                         25) {}
