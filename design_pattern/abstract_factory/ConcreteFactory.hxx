#pragma once
#include <memory>
#include "ConcreteProduct.hxx"
#include "AbstractFactoryInterface.hxx"

class WindowsFactory final : public GUIFactory 
{
public:
    std::unique_ptr<Button> createButton() const override {
        return std::make_unique<WindowsButton>();
    }

    std::unique_ptr<Checkbox> createCheckbox() const override {
        return std::make_unique<WindowsCheckbox>();
    }
};

class MacFactory final : public GUIFactory 
{
public:
    std::unique_ptr<Button> createButton() const override {
        return std::make_unique<MacButton>();
    }

    std::unique_ptr<Checkbox> createCheckbox() const override {
        return std::make_unique<MacCheckbox>();
    }
};