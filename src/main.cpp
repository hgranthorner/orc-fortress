#include "SDLWrapper.h"
#include "InputHandler.h"

int main() {
    auto sdl = SDLWrapper();
    sdl.InitSDL("Orc Fortress", 600, 600);

    auto eh = InputHandler();
    while (*eh.running) {
        sdl.HandleUserInput(std::make_shared<InputHandler>(eh), 60);
    }

    return 0;
}
