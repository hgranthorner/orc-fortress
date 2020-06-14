//
// Created by Grant Horner on 6/13/20.
//

#include "OrcTest.h"

void OrcTest::SetUp() {
    Test::SetUp();

    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
}

TEST_F(OrcTest, CanAct) {
    ASSERT_NO_THROW(orc_.Act(targeter_, prey_));
}

TEST_F(OrcTest, MovesCloserOnAct) {
    auto target = targeter_.FindClosest(orc_, prey_);
    auto distance_before = abs(orc_.x - target.value.x) + abs(orc_.y - target.value.y);
    orc_.Act(targeter_, prey_);
    auto distance_after = abs(orc_.x - target.value.x) + abs(orc_.y - target.value.y);
    ASSERT_EQ(distance_after, distance_before - 1);
}

TEST_F(OrcTest, DoesNotMoveIfNextToTarget) {
    auto prey = std::vector {Prey(orc_.x, orc_.y + 1)};
    auto target = targeter_.FindClosest(orc_, prey);
    auto distance_before = abs(orc_.x - target.value.x) + abs(orc_.y - target.value.y);
    orc_.Act(targeter_, prey);
    auto distance_after = abs(orc_.x - target.value.x) + abs(orc_.y - target.value.y);
    ASSERT_EQ(distance_after, distance_before);
}

TEST_F(OrcTest, EatsIfNextToPrey) {
    auto prey = std::vector {Prey(orc_.x, orc_.y + 1), Prey(orc_.x, orc_.y + 100)};
    orc_.Act(targeter_, prey);
    ASSERT_TRUE(prey.size() == 1);
}