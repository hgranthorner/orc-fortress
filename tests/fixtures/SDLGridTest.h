//
// Created by Grant Horner on 6/12/20.
//

#ifndef ORC_FORTRESS_SDLGRIDTEST_H
#define ORC_FORTRESS_SDLGRIDTEST_H


#include <gtest/gtest.h>

class SDLGridTest : public testing::Test {
protected:
    void SetUp() override;
    SDLGrid grid_;
    int rand_height_;
    int rand_width_;
};


#endif //ORC_FORTRESS_SDLGRIDTEST_H
