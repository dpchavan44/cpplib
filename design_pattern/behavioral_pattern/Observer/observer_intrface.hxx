#pragma once

class OrderObserver {
public:
    virtual void onOrderPlace(int orderId) = 0;
    virtual ~OrderObserver() = default;
};