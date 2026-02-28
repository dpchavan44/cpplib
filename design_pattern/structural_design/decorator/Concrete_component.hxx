// lets create plain coffee
#pragma once
#include "Interface_component.hxx"

class SimpleCoffee final : public Coffee {
public:
    double cost() const override{
        return 10.0;
    }
    std::string description() const override{
        return "Simple Coffee";
    }
};