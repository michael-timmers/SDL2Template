#pragma once

#include <memory>

#include "renderer.hpp"
#include "eventHandler.hpp"

class AppManager {
    std::unique_ptr<Renderer> renderer;
    std::unique_ptr<EventHandler> eventHandler;

   public:
    AppManager();

    // a console output
    void intro();

    // initialises all SDL and TTF variables
    int init();

    void run();

    // destroys all variables from SDL and TTF
    void quit();
};