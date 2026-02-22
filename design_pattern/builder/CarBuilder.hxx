#pragma once
#include <iostream>
#include "Car.hxx"

//Builder car builder interface own construction logic 
class CarBuilder {
public:
    virtual ~CarBuilder() = default;
    virtual CarBuilder& setEngine(std::string engine) = 0;
    virtual CarBuilder& setColour(std::string colour) = 0;
    virtual CarBuilder& setSeat(int seat) = 0;
    virtual CarBuilder& setAutomatic() = 0;
    virtual CarBuilder& setNavigation() = 0;
    virtual CarBuilder& setSunRoof() = 0;
    virtual Car build() = 0; // Car builder finally return Car object
};