//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_TARGETER_H
#define ORC_FORTRESS_TARGETER_H

#include <type_traits>
#include <vector>

template<typename T>
struct Target
{
public:
    Target(int index, T target) : index(index), value(target) {}

    int index;
    T value;
};

class Targeter {
public:
    Targeter();

    template<typename TSubject, typename TTarget>
    Target<TTarget> FindClosest(TSubject subject, std::vector<TTarget> targets) const;
};

#endif //ORC_FORTRESS_TARGETER_H
