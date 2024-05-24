#include "Square.cpp"

class FigureFactory {
public:
    static Square square(int x, int y){
        Square square(x, y);
        return square;
    }
};