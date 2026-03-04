#pragma once

#include <iostream>

//This is legacy payment provider
class LegacyPaymentProvider {
public:
    void make_payment(std::string acc, float amount){
        std::cout << "Legacy bank processing transactions for acoount No : " << acc << " and Rs : " << amount << std::endl;
    }
};