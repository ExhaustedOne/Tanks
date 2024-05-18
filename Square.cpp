#include "Figure.cpp"
#include "AllegroBase.hpp"

class Square : protected Figure{
private:
    const double side = 10;

public:
    void draw() override{
        al_draw_line(x-side/2, y-side/2, x+side/2, y+side/2, al_map_rgb(255, 255, 255), 1);
    }
};