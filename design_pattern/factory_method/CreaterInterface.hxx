#pragma once

#include <memory>
#include "VehicleInterface.hxx"

class VehicleFactoryInterface
{
public:
    virtual ~VehicleFactoryInterface() = default; // virtual destructor for proper clean up of d
    virtual std::unique_ptr<VehicleInterface> createVehicle() const = 0;
    // force all factory to implement createVehicle method
};