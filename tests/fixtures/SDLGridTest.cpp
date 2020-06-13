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
}

TEST_F(SDLGridTest, ResetWorks) {
    grid_.Reset();
    ASSERT_EQ(grid_.GetHeight(), rand_height_);
    ASSERT_EQ(grid_.GetWidth(), rand_width_);
}

TEST_F(SDLGridTest, ResetAssignsCorrectCoordinates) {
    grid_.Reset();
    for (int y = 0; y < grid_.GetHeight(); ++y) {
        auto row = grid_.GetRow(y);
        for (int x = 0; x < row.size(); ++x) {
            auto rect = row.at(x);
            ASSERT_EQ(rect.x, x);
            ASSERT_EQ(rect.y, y);
        }
    }
}

//TEST_F(SDLGridTest, PushWorks) {
//    grid_.Reset();
//    auto rect = Rectangle(Colors::BLUE,1,1,1,1);
//    grid_.Push(rect);
//    ASSERT_EQ(grid_.at(1).at(1).color, Colors::BLUE);
//}
