#pragma once
#include <iostream>
//This class is interface for implemenatation hierarchy
class MessageSender {
public:
    virtual void sendMessage(const std::string& message) = 0;
    virtual ~MessageSender() = default;
};