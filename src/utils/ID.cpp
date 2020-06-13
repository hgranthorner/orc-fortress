//
// Created by Grant Horner on 6/13/20.
//

#include "ID.h"

long ID::GetValue() const {
    return value_;
}

ID::ID() : value_(next_value_) {
    next_value_ = next_value_ + 1;
}

bool ID::operator==(const ID &rhs) const {
    return value_ == rhs.value_;
}

bool ID::operator!=(const ID &rhs) const {
    return !(rhs == *this);
}
