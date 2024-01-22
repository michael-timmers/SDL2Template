#include <memory>
#include <climits>

#include "headers.hpp"
#include "renderer.hpp"

namespace renderer {

// SDL variables
SDL_Renderer *renderer;
SDL_Window *window;

// changable.
SDL_Color backgroundColour = {255, 255, 255};
int lineThickness = 6;

int init() {
    window = SDL_CreateWindow("XYVisualiser", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, winWidth, winHeight, SDL_WINDOW_RESIZABLE | SDL_WINDOW_INPUT_GRABBED);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE);  // allows for rendering on textures.

    clear();
    return 0;  // success.
}

void clear() {
    SDL_SetRenderDrawColor(renderer, backgroundColour.r, backgroundColour.g, backgroundColour.b, 255);
    SDL_RenderClear(renderer);
}

void renderCopy(SDL_Texture *tex, const SDL_Rect *src, const SDL_Rect *dst) {
    SDL_RenderCopy(renderer, tex, src, dst);
}

SDL_Texture *createTexture(Uint32 format, int access, int w, int h) {
    return SDL_CreateTexture(renderer, format, access, w, h);
}

// returns a texture that was made from a surface
SDL_Texture *CreateTextureFromSurface(SDL_Surface *surface) {
    return SDL_CreateTextureFromSurface(renderer, surface);
}

// null means taht the target will be reset
void changeRendrTarget(SDL_Texture *targetTex) {
    SDL_SetRenderTarget(renderer, targetTex);
}

void present() {
    SDL_RenderPresent(renderer);
}

void kill() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}

}  // namespace renderer