#include "headers.hpp"

namespace eventHandler {

// SDL variable
SDL_Event event;

bool handleInput() {
    SDL_WaitEvent(&event);

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
}

}  // namespace eventHandler