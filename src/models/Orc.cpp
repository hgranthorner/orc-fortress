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

void Orc::Act(Targeter targeter, std::vector<Prey> &prey) {
    if (is_hungry_ && !prey.empty()) {
        auto target = targeter.FindClosest(*this, prey);
        auto delta_x = this->x - target.value.x;
        auto delta_y = this->y - target.value.y;
        if (abs(delta_x) + abs(delta_y) > 1) {
            if (abs(delta_x) > abs(delta_y)) {
                this->x += -(delta_x / abs(delta_x));
            } else {
                this->y += -(delta_y / abs(delta_y));
            }
        } else {
            prey.erase(prey.begin() + target.index);
        }
    }
}
