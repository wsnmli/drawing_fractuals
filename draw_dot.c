#include <SDL2/SDL.h>

int main() {
    SDL_Init(SDL_INIT_VIDEO); 
    SDL_Window* window = SDL_CreateWindow(
                       "draw dot", SDL_WINDOWPOS_UNDEFINED,
                       SDL_WINDOWPOS_UNDEFINED, 1000, 1000, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(
                           window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);


    // clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}