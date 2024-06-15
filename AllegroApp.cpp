#include "AllegroBase.hpp"
#include "Screensaver.cpp"
#include "Player.cpp"

class AllegroApp: public AllegroBase {
public:

    AllegroApp() : p(100, 100) {
        ss.Add(&p);
    }
    Screensaver ss;
    Player p;

private:
    void Draw() override{
        clear();
        ss.Draw();
    }

    void Fps() override{
        if(IsPressed(ALLEGRO_KEY_SPACE)) {p.shoot();}

        if (IsPressed(ALLEGRO_KEY_W)) {p.dy = -1, p.dx = 0;}
        else if (IsPressed(ALLEGRO_KEY_D)) {p.dy = 0, p.dx = 1;}
        else if (IsPressed(ALLEGRO_KEY_S)) {p.dy = 1, p.dx = 0;}
        else if (IsPressed(ALLEGRO_KEY_A)) {p.dy = 0, p.dx = -1;}
        else {p.dy = 0, p.dx = 0;}

        ss.Next();
    }
    static void clear(){
        al_draw_filled_rectangle(0, 0, SCREEN_W, SCREEN_H, al_map_rgb(0, 0, 0));
    }
};