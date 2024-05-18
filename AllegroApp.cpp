#include "AllegroBase.hpp"
#include "Screensaver.cpp"

class AllegroApp: AllegroBase {
private:
    Screensaver ss;

    void Draw() override{
        ss.Draw();
    }

    void Fps() override{
        if (IsPressed(ALLEGRO_KEY_W)) {}
    }
};