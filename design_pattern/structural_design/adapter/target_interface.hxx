#pragma once

#include <iostream>
//This is targeted interface what client wants

class PaymentProcessor {
public:
    virtual void pay(std::string acc, float amount) const = 0;
    virtual ~PaymentProcessor() = default;
};