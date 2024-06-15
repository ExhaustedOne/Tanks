#include "Figure.cpp"
#include <vector>
#pragma once


using namespace std;

class Screensaver {

    public:
    Screensaver() {
        Layout();
    }

    vector<Figure *> figures;

    void Add(Figure *f){
        figures.push_back(f);
    }

    void Draw(){
        for (auto it = figures.begin(); it != figures.end(); it++)
        (*it)->draw();
    };
    void Next(){
        for (auto it = figures.begin(); it != figures.end(); it++)
        (*it)->move();
    }

    void Layout(){

    }

};