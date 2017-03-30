#ifndef APP_H
#define APP_H

#include <SDL2/SDL.h>
#include "color.h"
#include "coord.h"

class App {
public:
    App( SDL_Renderer *renderer );
    void setRenderer( SDL_Renderer *renderer );
    int run();

protected:
    SDL_Renderer *renderer  = nullptr;
    SDL_Event    e;
    color        bg{ 0x1a, 0x1a, 0x1a, 0xff };
    int          framedelay = 16; // 16ms will give us ~60fps
    coord        mouse{ 0, 0 };
    bool         running    = true;
    void render();
    void handleEvents();

};

#endif //APP_H
