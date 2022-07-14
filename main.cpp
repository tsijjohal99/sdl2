// Example program:
// Using SDL2 to create an application window

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <stdio.h>

#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initilise:" << SDL_GetError() << std::endl;
    }  // Initialize SDL2

    // Create an application window with the following settings:
    SDL_Window* window = SDL_CreateWindow(
        "An SDL2 window",         // window title
        SDL_WINDOWPOS_UNDEFINED,  // initial x position
        SDL_WINDOWPOS_UNDEFINED,  // initial y position
        640,                      // width, in pixels
        480,                      // height, in pixels
        SDL_WINDOW_HIDDEN         // flags - see below
    );

    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        std::cerr << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 10, 230, 77, 255);

    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Surface* surface = SDL_GetWindowSurface(window);
    uint8_t* pixelData = reinterpret_cast<uint8_t*>(surface->pixels);

    SDL_PixelFormat* format = surface->format;
    int size = surface->w * surface->h * format->BytesPerPixel;

    std::ofstream out("pixels.data", std::ios::binary);
    for (int i = 0; i < size; i++) {
        out << pixelData[i];
    }

    // The window is open: could enter program loop here (see SDL_PollEvent())

    SDL_Delay(3000);  // Pause execution for 3000 milliseconds, for example

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();
    return 0;
}
