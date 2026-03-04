#include <iostream>
#include "adapter_class.hxx"
#include "legacy_provider.hxx"

int main(){
    //Legacy system created separately 
    auto legacyObject = std::make_unique<LegacyPaymentProvider>();
    // adapter will wrap legacy object
    std::unique_ptr<PaymentProcessor> adapterObject = 
        std::make_unique<BankAPIAdapter>(std::move(legacyObject));
    adapterObject->pay("ACC1234", 45000);
    return 0;    
}