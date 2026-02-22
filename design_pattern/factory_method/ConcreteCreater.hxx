#pragma once

#include "CreaterInterface.hxx"
#include "ConcreteVehicles.hxx"

// here factory method is deciding which object needs to be create

class PetrolCarFactory final : public VehicleFactoryInterface
{
public:
    std::unique_ptr<VehicleInterface> createVehicle() const override {
        return std::make_unique<PetrolCar>();
    }
};

class ElectricCarFactory final : public VehicleFactoryInterface
{
public:
    std::unique_ptr<VehicleInterface> createVehicle() const override {
        return std::make_unique<ElectricVehicle>();
    }
};