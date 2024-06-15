#include "Square.cpp"
#include "ScreenSaver.cpp"
#include "Bullet.cpp"
#pragma once

using namespace std;

class Player : public Square{
public:
    Player(int _x, int _y) : Square(_x, _y)
    {
    }

    int lastor = 0; // 0-W, 1-D, 2-S, 3-A
    int speed = 1;

    void move() override{
        x += dx * speed;
        y += dy * speed;
    }

    void draw() override{
        if(dy==-1 and dx==0) {
            rotateUp();
            lastor = 0;
        }
        else if(dy==0 and dx == 1){
            rotateRight();
            lastor = 1;
        }
        else if(dy==1 and dx==0){
            rotateDown();
            lastor = 2;
        }
        else if(dy==0 and dx==-1){
            rotateLeft();
            lastor = 3;
        }
        else if(dy==0 and dx==0){
            switch (lastor){
                case 0:
                    rotateUp();
                    break;

                case 1:
                    rotateRight();
                    break;

                case 2:
                    rotateDown();
                    break;

                case 3:
                    rotateLeft();
                    break;
            }
        }
    }
    void shoot(){

    }

private:
    void rotateUp(){
        al_draw_filled_rectangle(x - side / 2, y - side / 2, x + side / 2, y + side / 2,al_map_rgb(100, 100, 100)); //body
        al_draw_filled_rectangle(x - 3, y, x + 3, y - 40, al_map_rgb(0, 0, 255)); //barrel
        al_draw_filled_rectangle(x - side / 2, y + side / 2, x - side / 2 + 12, y - side / 2,al_map_rgb(80, 80, 80)); //left tracks
        al_draw_filled_rectangle(x + side / 2, y + side / 2, x + side / 2 - 12, y - side / 2,al_map_rgb(80, 80, 80)); //right tracks
    }


    void rotateRight(){
        al_draw_filled_rectangle(x - side / 2, y - side / 2, x + side / 2, y + side / 2,al_map_rgb(100, 100, 100)); //body
        al_draw_filled_rectangle(x, y-3, x+40, y + 3, al_map_rgb(0, 0, 255)); //barrel
        al_draw_filled_rectangle(x - side / 2, y - side / 2, x + side / 2, y - side / 2 + 12,al_map_rgb(80, 80, 80)); //upper tracks
        al_draw_filled_rectangle(x - side / 2, y + side / 2, x + side / 2, y + side / 2 - 12,al_map_rgb(80, 80, 80)); //lower tracks
    }

    void rotateDown(){
        al_draw_filled_rectangle(x - side / 2, y - side / 2, x + side / 2, y + side / 2,al_map_rgb(100, 100, 100)); //body
        al_draw_filled_rectangle(x - 3, y, x + 3, y + 40, al_map_rgb(0, 0, 255)); //barrel
        al_draw_filled_rectangle(x - side / 2, y + side / 2, x - side / 2 + 12, y - side / 2,al_map_rgb(80, 80, 80)); //left tracks
        al_draw_filled_rectangle(x + side / 2, y + side / 2, x + side / 2 - 12, y - side / 2,al_map_rgb(80, 80, 80)); //right tracks
    }

    void rotateLeft(){
        al_draw_filled_rectangle(x - side / 2, y - side / 2, x + side / 2, y + side / 2,al_map_rgb(100, 100, 100)); //body
        al_draw_filled_rectangle(x, y-3, x-40, y + 3, al_map_rgb(0, 0, 255)); //barrel
        al_draw_filled_rectangle(x - side / 2, y - side / 2, x + side / 2, y - side / 2 + 12,al_map_rgb(80, 80, 80)); //upper tracks
        al_draw_filled_rectangle(x - side / 2, y + side / 2, x + side / 2, y + side / 2 - 12,al_map_rgb(80, 80, 80)); //lower tracks
    }
};