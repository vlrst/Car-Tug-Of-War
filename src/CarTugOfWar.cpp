#include <SDL3/SDL.h>
#include <iostream>
#include <vector>
#include <string>
#include "Car.hpp"
#include "CarTugOfWar.hpp"

#define WIDTH 1280
#define HEIGHT 720


void grun() {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("Initialization failed - %s", SDL_GetError());
        //return 1;
    }
    SDL_Window *window;
    SDL_Renderer *renderer;

    SDL_CreateWindowAndRenderer("Car Tug of War Physics Sim", 1280, 720, 0, &window, &renderer);
	bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) { 
            if (event.type == SDL_EVENT_QUIT) running = false;
        }



        SDL_RenderPresent(renderer);
    }
    SDL_Quit();
}


