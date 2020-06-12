//
// Created by Grant Horner on 6/11/20.
//

#include <iostream>
#include <gtest/gtest.h>
#include <models/Prey.h>
#include <InputHandler.h>
#include "fixtures/InputHandlerTest.h"
#include "fixtures/SDLGridTest.h"

TEST(GoogleTest, ConfirmSetup) {
    ASSERT_EQ(1, 1);
}

TEST_F(SDLGridTest, ResetWorks) {
    grid_.Reset();
    ASSERT_EQ(grid_.size(), rand_height_);
    ASSERT_EQ(grid_.at(0).size(), rand_width_);
}

TEST_F(SDLGridTest, ResetAssignsCorrectCoordinates) {
    grid_.Reset();
    for (int y = 0; y < grid_.size(); ++y) {
        auto row = grid_.at(y);
        for (int x = 0; x < row.size(); ++x) {
            auto rect = row.at(x);
            ASSERT_EQ(rect.x, x);
            ASSERT_EQ(rect.y, y);
        }
    }
}

TEST_F(InputHandlerTest, CreatesNewPreyOnRPress) {
    InputHandler::HandleInput(
            SDL_EventType::SDL_KEYDOWN,
            SDL_SCANCODE_R,
            running_,
            prey_);
    ASSERT_FALSE(prey_.empty());
}

TEST_F(InputHandlerTest, StopsRunningOnQuit) {
    InputHandler::HandleInput(
            SDL_EventType::SDL_QUIT,
            SDL_SCANCODE_Q,
            running_,
            prey_);
    ASSERT_FALSE(running_);
}
