#pragma once

#include "concrete_strategy.hxx"
#include "strategy_context.hxx"
#include <iostream>
#include <memory>

int main(){
    PaymentProcessor processor(std::make_unique<UPIPayment>());
    processor.pay(10000);

    processor.setStrategy(std::make_unique<creditcardPayment>());
    processor.pay(500000);

    return 0;
}