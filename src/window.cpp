#include "window.h"

void window::move() {
    std::cout << "Input coordinates for window: " << std::endl;
    std::cin >> coordinateX;
    std::cin >> coordinateY;
    if(coordinateX > 50 || coordinateX < 0 || coordinateY > 80 || coordinateY < 0) {
        std::cerr << "Incorrect coordinates.Try again" << std::endl;
        coordinateX = 1;
        coordinateY = 1;
    }
}

void window::resize() {
    std::cout << "Please input new height and weight for window: " << std::endl;
    std::cin >> height;
    std::cin >> weight;
    if(height <= 0 || weight <= 0 || height >= 80 || weight >= 50) {
        std::cerr << "Incorrect values, try again!" << std::endl;
        height = 1;
        weight = 1;
    }
}

int window::getX(){
    return coordinateX;
}
int window::getY(){
    return coordinateY;
}
int window::getHeight(){
    return height;
}
int window::getWeight(){
    return weight;
}