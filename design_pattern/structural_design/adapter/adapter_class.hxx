#pragma once

#include <iostream>
#include <memory>
#include "legacy_provider.hxx"
#include "target_interface.hxx"

class BankAPIAdapter : public PaymentProcessor {
private:
    std::unique_ptr<LegacyPaymentProvider> _legacyAPi;
public:
    explicit BankAPIAdapter(std::unique_ptr<LegacyPaymentProvider> legacy) 
        : _legacyAPi (std::move(legacy)) {}

    void pay(std::string acc, float amount) const override {
        _legacyAPi->make_payment(acc, amount);
    }
};