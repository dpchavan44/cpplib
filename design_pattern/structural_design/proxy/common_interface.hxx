#pragma once
#include <iostream>

// this interface will extend by real object and proxy class
class Image {
public:
    virtual ~Image() = default;
    virtual void display() = 0;
};