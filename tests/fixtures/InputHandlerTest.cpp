//
// Created by Grant Horner on 6/12/20.
//

#include <InputHandler.h>
#include "InputHandlerTest.h"

void InputHandlerTest::SetUp() {
    Test::SetUp();

    running_ = true;
    prey_ = std::vector<Prey>();
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
