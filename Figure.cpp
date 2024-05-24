#pragma once

class Figure {
protected:
    int x = 0;
    int y = 0;

public:
    Figure(int _x, int _y){
        x = _x;
        y = _y;
    }

    Figure() {}

    virtual void draw() = 0;
    virtual void move() {};
};