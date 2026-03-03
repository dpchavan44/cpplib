
#include "ConcreteBuilder.hxx"

int main(){
    SportCarBuilder sportBuilder;
    Car car1 = sportBuilder.setEngine("Power").setColour("White").setSeat(2).setAutomatic().build();
    car1.show();
    //chainble object creation
    Car car2 = sportBuilder.setEngine("High-Power").setColour("Yellow").setSeat(4).setAutomatic().setNavigation().setSunRoof()
    .build();
    car2.show();
    return 0;
}