#include <iostream>
#include "AllegroBase.hpp"
#include "AllegroApp.cpp"

using namespace std;

int main() {
    srand( time(0) );
    AllegroApp app;
    if ( !app.Init( SCREEN_W, SCREEN_H, FPS ) )
    {
        return 1;
    }
    app.Run();
    return 0;
}

