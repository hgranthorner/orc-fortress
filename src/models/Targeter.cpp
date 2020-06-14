//
// Created by Grant Horner on 6/13/20.
//

#include "Targeter.h"
#include "Prey.h"
#include "Orc.h"
#include <type_traits>

// Assumptions: targets is not empty, targets is not sorted
// Example: Orc:  x = 5, y = 10
//          Prey: x = 7, y = 8  -> 2 + 2 -> 4
//          Prey: x = 4, y = 15 -> 1 + 5 -> 6
template<typename TSubject, typename TTarget>
Target<TTarget> Targeter::FindClosest(const TSubject subject, std::vector<TTarget> targets) const {
    if (targets.empty())
        throw std::invalid_argument("Targets vector should not be empty.");
    static_assert(std::is_base_of<Position, TSubject>::value, "Subject must derive from Position.");
    static_assert(std::is_base_of<Position, TTarget>::value, "Target must derive from Position.");
    auto subj = static_cast<Position>(subject);
    int closest_so_far = INT_MAX;
    const TTarget *ptr;
    int index = 0;
    int target_index = 0;
    for (auto &targetGeneric:targets) {
        auto target = static_cast<Position>(targetGeneric);
        auto distance = abs(subj.x - target.x) + abs(subj.y - target.y);
        if (closest_so_far > distance) {
            target_index = index;
            ptr = &targetGeneric;
            closest_so_far = distance;
        }
        index++;
    }
    return Target(target_index, *ptr);
}

template Target<Prey> Targeter::FindClosest<Orc, Prey>(const Orc, const std::vector<Prey>) const;
template Target<Position> Targeter::FindClosest<Position, Position>(const Position, const std::vector<Position>) const;

Targeter::Targeter() = default;
