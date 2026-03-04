#pragma once
#include <iostream>
#include <memory>

#include "implemenatation_hierarchy.hxx"
#include "concrete_hierarchy.hxx"

//This is abtraction interface (what)

class Notification {
protected:
    //The bride
    MessageSender* _sender;
public:
    Notification(MessageSender* sender) : _sender (std::move(sender)) {}
    virtual ~Notification() = default;
    virtual void notify(const std::string& message) = 0;
};