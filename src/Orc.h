//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_ORC_H
#define ORC_FORTRESS_ORC_H

#include "Rectangle.h"

class Orc {
public:
    explicit Orc(Color color);

    Rectangle Rect;
private:
    bool _isHungry = true;
};


#endif //ORC_FORTRESS_ORC_H
