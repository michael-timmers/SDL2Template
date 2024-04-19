#pragma once
#include <vector>

#include "headers.hpp"

class Renderer {
    // SDL variables
    SDL_Renderer* renderer;
    SDL_Window* window;

    // changable.
    SDL_Color backgroundColour = {255, 255, 255};
    int lineThickness = 6;

   public:
    // set up renderer and window
    Renderer();

    // clears the renderer
    void clear();

    void renderCopy(SDL_Texture* tex, const SDL_Rect* src, const SDL_Rect* dst);

    SDL_Texture* createTexture(Uint32 format, int access, int w, int h);

    // returns a texture that was made from a surface
    SDL_Texture* CreateTextureFromSurface(SDL_Surface* surface);

    // changes the render target
    void changeRendrTarget(SDL_Texture* targetTex = NULL);

    // presents the renderer
    void present();

    ~Renderer();
};