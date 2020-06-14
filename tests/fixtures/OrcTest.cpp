//
// Created by Grant Horner on 6/13/20.
//

#include "OrcTest.h"

void OrcTest::SetUp() {
    Test::SetUp();

    orc_ = Orc(Colors::RED);
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
    prey_.emplace_back();
}

