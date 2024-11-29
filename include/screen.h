#ifndef SCREEN_H
#define SCREEN_H

#include <window.h>


class screen {
private:
    int screenMatrix[80][50] = {{0}};
    window* linkedWindow = nullptr;
public:
    void setWindow(window& win);
    void update();
    void display();
};



#endif
