#pragma once

#include <iostream>
#include "VehicleInterface.hxx"

class PetrolCar final : public VehicleInterface
{
public:
    void drive() override {
        std::cout << "Driving a petrol car!" << std::endl;
    }
};

class ElectricVehicle final : public VehicleInterface
{
public:
    void drive() override {
        std::cout << "Driving a electric vehicle" << std::endl;
    }
};