#pragma once

#include "headers.hpp"

class EventHandler {
    // SDL variable
    SDL_Event event;

   public:
    bool handleInput();
};