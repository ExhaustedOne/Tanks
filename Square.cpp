#pragma once

#include "Figure.cpp"
#include "AllegroBase.hpp"

class Square : public Figure{
protected:
    const double side = 50;

public:

   Square(int _x, int _y){
       x = _x;
       y = _y;
   }

    void draw() {
        al_draw_filled_rectangle(x-side/2, y-side/2, x+side/2, y+side/2, al_map_rgb(100, 100, 100));
    }
};