//
// Created by Grant Horner on 6/12/20.
//

#include "Orc.h"
#include "Consts.h"

Orc::Orc(const Color color) : Rectangle(color,
                                        300,
                                        300,
                                        Consts::ORC_LENGTH,
                                        Consts::ORC_LENGTH) {}
