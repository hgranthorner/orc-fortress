//
// Created by Grant Horner on 6/11/20.
//

#include <iostream>
#include <gtest/gtest.h>
#include <models/Prey.h>
#include <InputHandler.h>
#include "fixtures/InputHandlerTest.h"

TEST(TestGoogleTest, ConfirmSetup) {
    ASSERT_EQ(1, 1);
}

TEST_F(InputHandlerTest, CreatesNewPreyOnRPress) {
    InputHandler::HandleInput(
            SDL_EventType::SDL_KEYDOWN,
            SDL_SCANCODE_R,
            running_,
            prey_);
    ASSERT_FALSE(prey_.empty());
}

TEST_F(InputHandlerTest, StopsRunningOnQPress) {
    InputHandler::HandleInput(
            SDL_EventType::SDL_KEYDOWN,
            SDL_SCANCODE_Q,
            running_,
            prey_);
    ASSERT_FALSE(running_);
}
