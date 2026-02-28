// lets add decorator to coffee
#pragma once
#include <memory>
#include "Coffee_decorator.hxx"

//lets add milk
class MilkDecorator final: public CoffeeDecorator {
public:
    using CoffeeDecorator::CoffeeDecorator; // This will call base constructor first
    double cost() const override {
        return _coffee->cost() + 10.0;
    }
    std::string description() const override {
        return _coffee->description() + " , Milk";
    }
};
//lets add Suger
class SugerDecorator final : public CoffeeDecorator {
public:
    using CoffeeDecorator::CoffeeDecorator; // This will call base constructor first
    double cost() const override {
        return _coffee->cost() + 10.0;
    }
    std::string description() const override {
        return _coffee->description() + " , Suger";
    }
};
//lets add Chocolate
class ChocolateDecorator final : public CoffeeDecorator {
public:
    using CoffeeDecorator::CoffeeDecorator; // This will call base constructor first
    double cost() const override {
        return _coffee->cost() + 10.0;
    }
    std::string description() const override {
        return _coffee->description() + " , Chocolate";
    }
};