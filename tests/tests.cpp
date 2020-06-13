//
// Created by Grant Horner on 6/11/20.
//

#include <iostream>
#include <gtest/gtest.h>
#include <utils/UUID.h>

TEST(GoogleTest, ConfirmSetup) {
    ASSERT_EQ(1, 1);
}

TEST(UUIDTest, CanConstruct) {
    auto uuid = UUID();
    ASSERT_TRUE(uuid.GetValue().size() > 0);
}