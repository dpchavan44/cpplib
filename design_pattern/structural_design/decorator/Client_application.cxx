#pragma once
#include <memory>
#include "Coffee_decorator.hxx"
#include "Interface_component.hxx"
#include "Concrete_decorator.hxx"
#include "Concrete_component.hxx"

int main(){
    std::unique_ptr<Coffee> coffee = std::make_unique<SimpleCoffee>();
    // lets add Milk
    coffee = std::make_unique<MilkDecorator>(std::move(coffee));
    //lets add Suger dynamically
    coffee = std::make_unique<SugerDecorator>(std::move(coffee));
    //final coffee
    std::cout << coffee->cost() << "\n";
    std::cout << coffee->description() << "\n";
    return 0;
}