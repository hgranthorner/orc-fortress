//
// Created by Grant Horner on 6/13/20.
//

#include <utils/Position.h>
#include "TargeterTest.h"
#include <gtest/gtest.h>

TEST_F(TargeterTest, WorksAtAll) {
    auto pos = Position(1,1);
    std::vector<Position> poss;
    poss.emplace_back(1, 2);
    poss.emplace_back(5, 5);
    poss.emplace_back(5, 6);
    auto target = targeter_.FindClosest(pos, poss);
    ASSERT_EQ(target.x,1);
    ASSERT_EQ(target.y,2);
}

TEST_F(TargeterTest, WorksWithOrcsAndPrey) {
    auto orc = Orc(Colors::BLACK, 1,1);
    std::vector<Prey> prey;
    prey.emplace_back(1, 2);
    prey.emplace_back(5, 5);
    prey.emplace_back(5, 6);
    auto target = targeter_.FindClosest(orc, prey);
    ASSERT_EQ(target.x,1);
    ASSERT_EQ(target.y,2);
}
