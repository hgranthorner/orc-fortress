//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_POSITIONMAP_H
#define ORC_FORTRESS_POSITIONMAP_H


#include <unordered_map>
#include "Position.h"
#include "ID.h"

class PositionMap {
public:
    PositionMap();
    void Add(ID id, Position pos);
    void Emplace(ID id, int x, int y);
    void Remove(ID id);
    void Update(ID id, Position pos);
    Position Get(ID id);
    bool CheckIfExists(ID id);

private:
    std::unordered_map<int, Position> map_;

};


#endif //ORC_FORTRESS_POSITIONMAP_H
