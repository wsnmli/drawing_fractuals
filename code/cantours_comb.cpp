#include<iostream>
#include <SDL2/SDL.h>
using namespace std;

#define WIDTH (1000)
#define HEIGHT (1000)

int main() {
	SDL_Renderer *renderer;
	SDL_Window *window;

	SDL_Event event;
	
	// 	init sdl
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("Cantors Comb",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			WIDTH, HEIGHT, 0);
	if (window == NULL) cout << SDL_GetError();
	renderer = SDL_CreateRenderer(window, -1,
			SDL_RENDERER_ACCELERATED);
	
	//	set draw color to black and draw
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	// 	create rectangle
	SDL_Rect r;
	r.x = 40;
	r.y = 40;
	r.w = 40;
	r.h = 41;

	// change colour for rectangle
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	// draw rectangle to screen 
	SDL_RenderFillRect(renderer, &r);
	SDL_RenderPresent(renderer);
	SDL_Delay(4000);

	//	sdl clean up
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
