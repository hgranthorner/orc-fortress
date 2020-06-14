//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_ORC_H
#define ORC_FORTRESS_ORC_H

#include <vector>
#include <Rectangle.h>
#include "Prey.h"

class Orc : public Rectangle {
public:
    explicit Orc(Color color, int x = 30, int y = 30);
    void Act(std::vector<Prey> &prey) const;
private:
    bool is_hungry_ = true;
};


#endif //ORC_FORTRESS_ORC_H
