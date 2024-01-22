#include "headers.hpp"

namespace eventHandler {

// SDL variable
SDL_Event event;

bool handleInput() {
    while (true) {
        if (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    return false;
                    break;
                case SDL_KEYDOWN:
                    switch (event.key.keysym.sym) {
                            // arrows and space go here
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
            return true;
        }
        SDL_Delay(50);
    }
}

}  // namespace eventHandler