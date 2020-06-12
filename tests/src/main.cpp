//
// Created by Grant Horner on 6/11/20.
//

#include <iostream>
#include <gtest/gtest.h>
//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"

int main() {
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
}


TEST(Test, Test) {
    ASSERT_EQ(1, 1);
}

