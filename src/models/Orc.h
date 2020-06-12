//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_ORC_H
#define ORC_FORTRESS_ORC_H

#include "Rectangle.h"

class Orc : public Rectangle {
public:
    explicit Orc(Color color);
private:
    bool is_hungry_ = true;
};


#endif //ORC_FORTRESS_ORC_H
