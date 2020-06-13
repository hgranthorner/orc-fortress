//
// Created by Grant Horner on 6/12/20.
//

#include <sdl_wrapper/SDLGrid.h>
#include "SDLGridTest.h"

void SDLGridTest::SetUp() {
    Test::SetUp();

    rand_height_ = rand() % 100;
    rand_width_ = rand() % 100;
    grid_ = SDLGrid(rand_width_, rand_height_);
    grid_.Reset();
}

TEST_F(SDLGridTest, ResetWorks) {
    ASSERT_EQ(grid_.GetHeight(), rand_height_);
    ASSERT_EQ(grid_.GetWidth(), rand_width_);
}

TEST_F(SDLGridTest, ResetAssignsCorrectCoordinates) {
    for (int y = 0; y < grid_.GetHeight(); ++y) {
        auto row = grid_.GetRow(y);
        for (int x = 0; x < row.size(); ++x) {
            auto rect = row.at(x);
            ASSERT_EQ(rect.x, x);
            ASSERT_EQ(rect.y, y);
        }
    }
}

TEST_F(SDLGridTest, CanAdd) {
    auto rand1 = rand() % grid_.GetWidth();
    auto rand2 = rand() % grid_.GetHeight();
    auto rect = Rectangle(Colors::BLUE, rand1, rand2, 1, 1);
    grid_.Upsert(rect);
    ASSERT_EQ(grid_.Get(rand1, rand2).id, rect.id);
}

TEST_F(SDLGridTest, CanUpdate) {
    auto rand_x = rand() % grid_.GetWidth();
    auto rand_y = rand() % grid_.GetHeight();
    auto rect1 = Rectangle(Colors::BLUE, rand_x, rand_y, 1, 1);
    grid_.Upsert(rect1);
    ASSERT_EQ(grid_.Get(rand_x, rand_y).id, rect1.id);
    auto rect2 = rect1;
    rect2.x = rand_x + 1 > rand_width_ ? rand_x - 1 : rand_x + 1;
    rect2.y = rand_y + 1 > rand_height_ ? rand_y - 1 : rand_y + 1;
    grid_.Upsert(rect2);
    ASSERT_NE(grid_.Get(rand_x, rand_y).id, rect1.id);
    ASSERT_NE(grid_.Get(rect2.x, rect2.y).x, rect1.x);
    ASSERT_NE(grid_.Get(rect2.x, rect2.y).y, rect1.y);
    ASSERT_EQ(grid_.Get(rect2.x, rect2.y).x, rect2.x);
    ASSERT_EQ(grid_.Get(rect2.x, rect2.y).y, rect2.y);
}