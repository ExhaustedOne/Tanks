#include "AllegroBase.hpp"
#include "Figure.cpp"
#include "FigureFactory.cpp"
#include <vector>
#include <iterator>

using namespace std;

class Screensaver {

    public:
    Screensaver() {
        Layout();
    }

    vector<Square> figures;

    void Add(Square f){
        figures.push_back(f);
    }

    void Draw(){
        for (auto it = figures.begin(); it != figures.end(); it++)
            it->draw();
    };
    void Next(){
        for (auto it = figures.begin(); it != figures.end(); it++)
            it->move();
    }
    void Layout(){

    }

};