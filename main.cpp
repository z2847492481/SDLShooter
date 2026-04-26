#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[]) {
    
    // initializa SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // create window
    SDL_Window* window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    // create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // event loop
    while(true) {
        SDL_Event event;
        if(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) {
                break;
            }
        }

        // clear screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        // use last color to clear screen
        SDL_RenderClear(renderer);
        // draw reactangle
        SDL_Rect rect = {100, 100, 200, 200};
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderDrawRect(renderer, &rect);
        SDL_RenderFillRect(renderer, &rect);

        // update screen
        SDL_RenderPresent(renderer);
    }

    // before quit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}