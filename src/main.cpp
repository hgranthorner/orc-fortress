#include "helper.h"
#include "wrapper.h"

int main() {
    auto sdl = SDLWrapper();
    sdl.InitSDL("Orc Fortress", 600, 600);
    auto x = std::make_unique<helper>("worldio");
    x->doThing();
    return 0;
}
