#pragma once

#include <iostream>
#include "ProductInterface.hxx"

class WindowsButton final : public Button
{
public:
    void paint() const override {
        std::cout << "Rendering Windows button \n";
    }
};

class WindowsCheckbox final : public Checkbox
{
public:
    void paint() const override {
        std::cout << "Rendering windows checkbox \n";
    }
};

class MacButton final : public Button {
public:
    void paint() const override {
        std::cout << "Rendering mac button \n";
    }
};

class MacCheckbox final : public Checkbox {
public:
    void paint() const override {
        std::cout << "Rendering mac checkbox \n";
    }
};