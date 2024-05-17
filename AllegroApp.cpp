#include "AllegroBase.hpp"
#include "Screensaver.cpp"
#include "FigureFactory.cpp"

class AllegroApp: public AllegroBase {
private:
    Screensaver ss;

    AllegroApp() {
        ss.addFigure(FigureFactory::square(100, 100));
        Run();
    }
};