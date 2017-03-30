#ifndef INIT_SDL_H
#define INIT_SDL_H

#include <SDL2/SDL.h>

/**
 * @return SDL_Init will return non-zero on failure
 */
bool init_sdl()
{
    return SDL_Init( SDL_INIT_VIDEO ) > 0;
}

/**
 * @param width
 * @param height
 * @return Our new window! Hurray!
 */
SDL_Window *createWindow( int width, int height )
{
    SDL_Window *window = SDL_CreateWindow(
            PROJECT_NAME,
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            width,
            height,
            SDL_WINDOW_SHOWN
    );

    return window;
}

/**
 * @param window
 * @return A new renderer attched to the window specified
 */
SDL_Renderer *createRenderer( SDL_Window *window )
{
    SDL_Renderer *renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );

    return renderer;
}

#endif //INIT_SDL_H
