#pragma once
#include <memory>
#include "Interface_component.hxx"

// this decorator will have Cofee 
// Decorator is-a Coffee
// Decorator has-a Coffee

class CoffeeDecorator : public Coffee {
protected:
    std::unique_ptr<Coffee> _coffee;
public:
    virtual ~CoffeeDecorator() = default;
    explicit CoffeeDecorator(std::unique_ptr<Coffee> coffee) : _coffee(std::move(coffee)){};
};