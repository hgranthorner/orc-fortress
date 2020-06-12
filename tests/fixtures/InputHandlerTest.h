//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_INPUTHANDLERTEST_H
#define ORC_FORTRESS_INPUTHANDLERTEST_H

#include <gtest/gtest.h>
#include <Prey.h>

class InputHandlerTest : public testing::Test {
protected:
    void SetUp() override;

    bool running_ = true;
    std::vector<Prey> prey_ = std::vector<Prey>();
};


#endif //ORC_FORTRESS_INPUTHANDLERTEST_H
