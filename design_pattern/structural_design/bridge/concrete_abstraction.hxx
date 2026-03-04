#pragma once
#include<iostream>
#include<memory>

#include "abstraction_hierarchy.hxx"

class AlertNotification : public Notification {
public:
    using Notification::Notification; // This will class parent constructor
    void notify(const std::string& msg) override {
        _sender->sendMessage("Alert : " + msg);
    }
};

class ReminderNotification : public Notification {
public:
    using Notification::Notification;
    void notify(const std::string& msg) override {
        _sender->sendMessage("Reminder : " + msg);
    }
};