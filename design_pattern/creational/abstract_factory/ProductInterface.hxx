// here we will create all procut interface and concrete product will extend this class
#pragma once

class Button {
public:
    virtual ~Button() = default;
    virtual void paint() const = 0;
};

class Checkbox {
public:
    virtual ~Checkbox() = default;
    virtual void paint() const = 0;
};