#include <init/init_sdl.h>
#include <DemoApp.h>

int main()
{
    SDL_Window   *window   = nullptr;
    SDL_Renderer *renderer = nullptr;

    init_sdl();
    window   = createWindow( WIDTH, HEIGHT );
    renderer = createRenderer( window );

    DemoApp app( renderer );

    return app.run();
}