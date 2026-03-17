#pragma once

#include "observer_intrface.hxx"
#include <iostream>

class EmailService : public OrderObserver {
public:
    void onOrderPlace(int orderId) override {
        std::cout << "Sending order details over email for order " << orderId << std::endl;
    }
};

class InventoryService : public OrderObserver {
public:
    void onOrderPlace(int orderId) override {
        std::cout << "Updating inventory details for order " << orderId << std::endl;
    }
};

class AnalyticsService : public OrderObserver {
public:
    void onOrderPlace(int orderId) override {
        std::cout << "Showing Analytics details for order " << orderId << std::endl;
    }
};