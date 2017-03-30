#ifndef DEMOAPP_H
#define DEMOAPP_H

#include <app/App.h>

class DemoApp : public App {
public:
    int run();

    DemoApp( SDL_Renderer *renderer ) : App( renderer )
    {};
};


#endif //DEMOAPP_H
