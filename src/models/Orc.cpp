//
// Created by Grant Horner on 6/12/20.
//

#include "Orc.h"
#include "Consts.h"

Orc::Orc(const Color color, int x, int y) : Rectangle(color,
                                                      x,
                                                      y,
                                                      Consts::ORC_LENGTH,
                                                      Consts::ORC_LENGTH) {}

void Orc::Act(std::vector<Prey> &prey) const {
    if (is_hungry_) {

    }
}
