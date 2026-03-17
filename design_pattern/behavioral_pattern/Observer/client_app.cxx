#pragma once

#include "observer_intrface.hxx"
#include "concrete_observers.hxx"
#include "observable_subject.hxx"

#include <iostream>
#include <memory>
#include <vector>

int main() {
    OrderService orderService;
    auto mail = std::make_shared<EmailService>();
    auto inventory = std::make_shared<InventoryService>();
    auto analytics = std::make_shared<AnalyticsService>();

    orderService.attach(mail);
    orderService.attach(inventory);
    orderService.attach(analytics);

    orderService.placeOrder(1023);
    return 0;
}