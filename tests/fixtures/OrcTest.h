//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_ORCTEST_H
#define ORC_FORTRESS_ORCTEST_H


#include <gtest/gtest.h>
#include <models/Orc.h>

class OrcTest : testing::Test {
protected:
    void SetUp() override;

    Orc orc_;
    std::vector<Prey> prey_;
};


#endif //ORC_FORTRESS_ORCTEST_H
