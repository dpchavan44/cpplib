#pragma once
#include <memory>
#include "ProductInterface.hxx"

class GUIFactory {
public:
    virtual ~GUIFactory() = default;
    virtual std::unique_ptr<Button> createButton() const = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox () const = 0;
};