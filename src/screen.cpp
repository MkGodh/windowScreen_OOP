#include "screen.h"

void screen::setWindow(window& win) {
    linkedWindow = &win;
}

void screen::display() {
    for(int i = 0; i < 80;++i) {
        for(int j = 0;j < 50;++j) {
            std::cout << screenMatrix[i][j];
        }
        std::cout << "\n";
    }
}
void screen::update() {
    for(int i = 0; i < 80;++i) {
        for(int j = 0;j < 50;++j) {
           screenMatrix[i][j] = 0;
        }
    }

    for(int i = linkedWindow->getY();i < linkedWindow->getY() + linkedWindow->getHeight();++i) {
        for(int j = linkedWindow->getX();j < linkedWindow->getX() + linkedWindow->getWeight();++j) {
            if(i < 50 && j < 80) {
                screenMatrix[i][j] = 1;
            }
        }
    }
}

