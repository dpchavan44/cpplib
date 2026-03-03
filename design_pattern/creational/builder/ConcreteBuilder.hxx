#pragma once

#include "CarBuilder.hxx"
#include "Car.hxx"

class SportCarBuilder final : public CarBuilder
{
private:
    Car car;
public:
    virtual ~SportCarBuilder() = default;
    CarBuilder& setEngine(std::string engine) override {
        car.engine = std::move(engine);
        return *this; // which support chainble
    }
    CarBuilder& setColour(std::string colour) override {
        car.colour = std::move(colour);
        return *this; // which support chainble
    }
    CarBuilder& setSeat(int seat) override {
        car.seats = seat;
        return *this;
    }
    CarBuilder& setAutomatic() override {
        car.isAutomatic = true;
        return *this;
    }
    CarBuilder& setNavigation() override {
        car.isNavigation = true;
        return *this;
    }
    CarBuilder& setSunRoof() override {
        car.isSunroof = true;
        return *this;
    }
    Car build(){
        return std::move(car);
    }
};