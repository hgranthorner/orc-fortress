//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_POSITIONMAPTEST_H
#define ORC_FORTRESS_POSITIONMAPTEST_H


#include <gtest/gtest.h>

class PositionMapTest : public testing::Test {
protected:
    void SetUp() override;
    PositionMap map_;
    ID id_;
};


#endif //ORC_FORTRESS_POSITIONMAPTEST_H
