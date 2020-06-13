//
// Created by Grant Horner on 6/13/20.
//

#include <utils/PositionMap.h>
#include "PositionMapTest.h"

void PositionMapTest::SetUp() {
    Test::SetUp();

    map_ = PositionMap();
}


TEST_F(PositionMapTest, CanAddAndGet) {
    auto pos1 = Position(rand(), rand());
    map_.Add(id_, pos1);
    ASSERT_TRUE(map_.CheckIfExists(id_));
    auto pos2 = map_.Get(id_);
    ASSERT_EQ(pos1, pos2);
}

TEST_F(PositionMapTest, CanEmplaceAndGet) {
    auto pos1 = Position(rand(), rand());
    map_.Emplace(id_, pos1.x, pos1.y);
    auto pos2 = map_.Get(id_);
    ASSERT_EQ(pos1, pos2);
}

TEST_F(PositionMapTest, CanCheckIfValueExists) {
    ASSERT_FALSE(map_.CheckIfExists(id_));
    map_.Emplace(id_, rand(), rand());
    ASSERT_TRUE(map_.CheckIfExists(id_));
    auto id2 = ID();
    ASSERT_FALSE(map_.CheckIfExists(id2));
    map_.Add(id2, Position(rand(), rand()));
    ASSERT_TRUE(map_.CheckIfExists(id2));
}

TEST_F(PositionMapTest, CanRemoveValue) {
    ASSERT_FALSE(map_.CheckIfExists(id_));
    auto pos = Position();
    map_.Add(id_, pos);
    ASSERT_TRUE(map_.CheckIfExists(id_));
    map_.Remove(id_);
    ASSERT_FALSE(map_.CheckIfExists(id_));
}

TEST_F(PositionMapTest, CanUpdateValue) {
    ASSERT_FALSE(map_.CheckIfExists(id_));
    auto rand1 = rand();
    auto rand2 = rand();
    auto pos1 = Position(rand1, rand2);
    map_.Add(id_, pos1);
    ASSERT_EQ(pos1, map_.Get(id_));
    auto pos2 = Position(rand1 + 1, rand2 + 1);
    map_.Update(id_, pos2);
    ASSERT_NE(pos1, map_.Get(id_));
    ASSERT_EQ(pos2, map_.Get(id_));
}