#pragma once
#include <iostream>
class Car {
public:
    std::string engine;
    std::string colour = "Black";
    int seats;

    bool isAutomatic = false;
    bool isSunroof = false;
    bool isNavigation = false;

    void show() const {
        std::cout << "------------------------------ \n";
        std::cout << "Car specifications \n";
        std::cout << "Engine :" << engine << "\n";
        std::cout << "Colour :" << colour << "\n";
        std::cout << "Seats :" << seats << "\n";
        std::cout << "isAutomatic :" << (isAutomatic ? "Yes" : "No") << "\n";
        std::cout << "isSunroof :" << (isSunroof  ? "Yes" : "No") << "\n";
        std::cout << "isNavigation :" << (isNavigation ? "Yes" : "No") << "\n";
        std::cout << "------------------------------- \n";

    }
};