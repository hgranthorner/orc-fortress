//
// Created by Grant Horner on 6/13/20.
//

#include "PositionMap.h"

PositionMap::PositionMap() : map_(std::unordered_map<int, Position>()){}

void PositionMap::Upsert(ID id, Position pos) {
    map_[id.GetValue()] = pos;
}

void PositionMap::Remove(ID id) {
    map_.erase(id.GetValue());
}

bool PositionMap::CheckIfExists(ID id) {
    return map_.count(id.GetValue()) == 1;
}

Position PositionMap::Get(ID id) {
    return map_.at(id.GetValue());
}

void PositionMap::Emplace(ID id, int x, int y) {
    Upsert(id, Position(x, y));
}
