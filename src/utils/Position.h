//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_POSITION_H
#define ORC_FORTRESS_POSITION_H


struct Position {
    Position();
    Position(int x, int y);
    int x;
    int y;

    bool operator==(const Position &rhs) const;

    bool operator!=(const Position &rhs) const;
};


#endif //ORC_FORTRESS_POSITION_H
