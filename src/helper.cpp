//
// Created by Grant Horner on 6/11/20.
//

#include "helper.h"
#include <iostream>
#include <string>
void helper::doThing() {

    std::cout << "Hello "<< this->name <<" 2" << std::endl;
}

helper::helper(const std::string& name) {
    this->name = name;
}
