#include "AllegroBase.hpp"
#include "Figure.cpp"
#include <vector>
#include <iterator>

using namespace std;

class Screensaver {

    public:
    vector<Figure> figures;
    void addFigure(Figure f){
        figures.push_back(f);
    }

    void drawFigures(){
        for (vector<Figure>::iterator it = figures.begin(); it != figures.end(); it++)
            it->draw();
    }



};