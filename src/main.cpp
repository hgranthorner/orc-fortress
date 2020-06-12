#include "SDLWrapper.h"
#include "InputHandler.h"

int main() {
    auto sdl = SDLWrapper();
    sdl.InitSDL("Orc Fortress", 600, 600);

    auto FPS = 60;
    int counter = 0;
    auto running = true;
    auto inputHandler = InputHandler(running);
    while (inputHandler.isRunning() && counter < 10) {
        sdl.HandleUserInput(inputHandler, FPS);
        counter++;
    }

    return 0;
}
