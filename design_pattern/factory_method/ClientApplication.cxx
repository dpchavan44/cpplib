#include "VehicleInterface.hxx"
#include "ConcreteCreater.hxx"
#include "CreaterInterface.hxx"

void vehicleCreation(const VehicleFactoryInterface& factory){
    auto carObject = factory.createVehicle();
    carObject->drive();
}

int main(){
    PetrolCarFactory petrolCar;
    ElectricCarFactory electricCar;
    vehicleCreation(petrolCar);
    vehicleCreation(electricCar);
    return 0;
}