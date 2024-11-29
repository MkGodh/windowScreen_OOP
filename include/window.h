#ifndef WINDOW_H
#define WINDOW_H
#include <iostream>


class window {
public:
    int coordinateX = 15;
    int coordinateY = 3;

    int height = 15;
    int weight = 20;

    void borderCheck();
    void move();
    void resize();

    int getX();
    int getY();
    int getHeight();
    int getWeight();
};



#endif
