#include <memory>

#include "headers.hpp"
#include "appmanager.hpp"
#include "eventHandler.hpp"
#include "renderer.hpp"

AppManager::AppManager()
    : renderer(std::make_unique<Renderer>()),
      eventHandler(std::make_unique<EventHandler>()) {
}

void AppManager::intro() {
    std::cout << "SDL2Template\n";
}

int AppManager::init() {
    SDL_Init(SDL_INIT_VIDEO);

    return 0;  // success
}

void AppManager::run() {
    // profiling variables
    //  int sumTime = 0, numLoops = 0;

    // event handler loops until input is given, then things are updated..
    while (eventHandler->handleInput()) {
        renderer->clear();

        // auto start = std::chrono::high_resolution_clock::now();

        // do renderering

        // auto finish = std::chrono::high_resolution_clock::now();

        // sumTime += std::chrono::duration_cast<std::chrono::microseconds>(finish-start).count();

        // if(numLoops++%20 == 0){
        // std::cout << "graph render time:" << (sumTime/20) << "microseconds" << "\n";
        // sumTime = 0;
        // }

        renderer->present();

        SDL_Delay(10);
    }
}

void AppManager::quit() {
    SDL_Quit();
}
