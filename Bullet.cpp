#include "Square.cpp"
#pragma once

class Bullet: public Square {
private:
    const int side = 5;
    const int speed = 10;

public:
    Bullet(int _x, int _y): Square(_x, _y)
    {
    }

    void move(){
        x += dx * speed;
        y += dy * speed;
    }

};