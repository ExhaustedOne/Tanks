#include "Square.cpp"

class Player : private Square{
private:
public:
    const int speed = 5;

    void move() override{
        x += speed;
        y += speed;
    }
};