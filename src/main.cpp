#include <iostream>
#include "helper.h"

int main() {
    std::unique_ptr<helper> x;
    x->doThing();
    return 0;
}
