#include "DemoApp.h"

int DemoApp::run()
{
    /**
     * Setup
     */

    SDL_Rect box = { WIDTH / 2, HEIGHT / 2, 10, 10 };

    /**
     * This is the main program loop
     */
    while ( running )
    {
        SDL_SetRenderDrawColor( renderer, 0xff, 0xff, 0xff, 0xff );
        SDL_RenderDrawRect( renderer, &box );

        // Typically these will be the last actions in each loop
        render();
        handleEvents();
    }

    return 0;
}
