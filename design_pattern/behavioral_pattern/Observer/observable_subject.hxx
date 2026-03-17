#pragma once

#include "observer_intrface.hxx"
#include <iostream>
#include <memory>
#include <vector>

class OrderService {
private:
    // weak pointer allow lose coupling between resources, client can delete resource
    std::vector<std::weak_ptr<OrderObserver>> observers;
public:
    void attach(const std::shared_ptr<OrderObserver>& observer) {
        observers.push_back(observer);
    }
    void placeOrder(int orderId){
        notify(orderId);
    }
private:
    void notify(int orderId){
        for(auto it = observers.begin(); it != observers.end();){
            // check observer still exist or not because client can detach or delete any observers
            if(auto observer = it->lock()) { // lock method on iterator will return shared pointer
                // observer still exist, notify 
                observer->onOrderPlace(orderId);
                ++it;
            } else {
                // observer does not exist, client may have delete it
                // lets update in reference filed also 
                it = observers.erase(it);
            }
        }
    }
};