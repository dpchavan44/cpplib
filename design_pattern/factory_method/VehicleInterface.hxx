#pragma once

class VehicleInterface
{
public:
    virtual ~VehicleInterface() = default; // virtual destructor for proper clean up of dervied classes
    virtual void drive() = 0;
    // force all vehicle to implement drive method
};