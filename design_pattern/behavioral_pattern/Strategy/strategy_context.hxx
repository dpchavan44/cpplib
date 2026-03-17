#pragma once

#include "payment_interface_strategy.hxx"
#include <iostream>
#include <memory>

class PaymentProcessor {
private:
    std::unique_ptr<PaymentStrategy> _strategy;
public:
    explicit PaymentProcessor(std::unique_ptr<PaymentStrategy> strategy) : _strategy(std::move(strategy)) {}

    void setStrategy(std::unique_ptr<PaymentStrategy> strategy) {
        _strategy = std::move(strategy);
    }
    void pay(double amount) {
        _strategy->pay(amount);
    }
};