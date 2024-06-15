#pragma once

class Figure {


public:
    Figure(int _x, int _y){
        x = _x;
        y = _y;
    }
    int dx = 0;
    int dy = 0;
    int speed = 0;
    int x;
    int y;

    Figure() = default;

    virtual void draw() = 0;
    virtual void move() = 0;
};