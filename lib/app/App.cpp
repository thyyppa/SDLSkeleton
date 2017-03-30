#include "App.h"

/**
 * Set the SDL renderer on init so we can draw to the screen
 * @param renderer
 */
App::App( SDL_Renderer *renderer )
{
    this->setRenderer( renderer );
}

/**
 * Set SDL Renderer
 * This must be set or else!
 * @param renderer
 */
void App::setRenderer( SDL_Renderer *renderer )
{
    this->renderer = renderer;
}

/**
 * This renders the renderer buffer to the screen, waits for
 * /framedelay/ ms (16 will give you 60fps), then  clears the
 * screen with the background color set on the App object (color bg)
 */
void App::render()
{
    SDL_RenderPresent( renderer );
    SDL_Delay( framedelay );
    SDL_SetRenderDrawColor( renderer, bg.r, bg.g, bg.b, bg.a );
    SDL_RenderClear( renderer );
}

/**
 * This will usually be overridden with app specific event
 * handling, but this will close the app with q, "x" and esc.
 */
void App::handleEvents()
{
    while ( SDL_PollEvent( &e ) != 0 )
    {
        // "x" button was pressed...
        if ( e.type == SDL_QUIT )
        {
            running = false;
        }

        if ( e.type == SDL_KEYDOWN )
        {
            switch ( e.key.keysym.sym )
            {
                // if esc or 'q' was pressed...
                case SDLK_ESCAPE:
                case SDLK_q:
                    running = false;
                    break;
            }
        }

        // keep track of mouse position
        if ( e.type == SDL_MOUSEMOTION )
        {
            mouse.x = e.motion.x;
            mouse.y = e.motion.y;
        }
    }
}
