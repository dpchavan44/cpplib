#pragma once
#include <iostream>

#include "implemenatation_hierarchy.hxx"
//Concrete implemenatation

class SMSSender : public MessageSender {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "Sending SMS : " << message << std::endl;
    }
};

class EMailSender : public MessageSender {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "Sending Mail : " << message << std::endl;
    }
};