#include <iostream>
#include <screen.h>
#include <window.h>

int main() {
    window myWindow;
    screen myScreen;

    std::string command;
    while(command != "close") {
        std::cout << "Please input command: " << std::endl;
        std::cin >> command;
        if(command == "move") {
         myScreen.setWindow(myWindow);
         myWindow.move();
         std::cout << "New coordinates of window: " << myWindow.coordinateX << " " << myWindow.coordinateY << std::endl;
         myScreen.update();
        }
        else if(command == "resize") {
            myScreen.setWindow(myWindow);
            myWindow.resize();
            myScreen.update();
            std::cout << "New coordinates of window: " << myWindow.height << " " << myWindow.weight << std::endl;
        }
        else if(command == "display") {
            myScreen.setWindow(myWindow);
            myScreen.display();
        }
        else {
            std::cerr << "Unknown command. Try again." << std::endl;
            continue;
        }
    }
    return 0;
}
