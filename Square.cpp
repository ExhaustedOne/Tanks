#include "Figure.cpp"
#include "AllegroBase.hpp"

class Square : private Figure{
private:
    const double side = 10;

public:
    void Draw() override{
        al_draw_line(x-side/2, y-side/2, x+side/2, y+side/2, al_map_rgb(255, 255, 255), 1);
    }
};