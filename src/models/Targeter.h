//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_TARGETER_H
#define ORC_FORTRESS_TARGETER_H

#include <type_traits>
#include <vector>
#include "Orc.h"

class Targeter {
public:
    Targeter();

    template<typename TSubject, typename TTarget>
    TTarget FindClosest(TSubject subjectGeneric, std::vector<TTarget> targets) const;
};




#endif //ORC_FORTRESS_TARGETER_H
