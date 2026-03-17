#pragma once

#include "payment_interface_strategy.hxx"
#include <iostream>

class UPIPayment : public PaymentStrategy {
public:
    void pay(double amount) override {
        std::cout << "Making UPI payment of " << amount << " Rs." << std::endl;
    }
};

class NetbankingPayment : public PaymentStrategy {
public:
    void pay(double amount) override {
        std::cout << "Making net banking payment of " << amount << " Rs." << std::endl;
    }
};

class creditcardPayment : public PaymentStrategy {
public:
    void pay(double amount) override {
        std::cout << "Making credit card payment of " << amount << " Rs." << std::endl;
    }
};