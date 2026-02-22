#pragma once

#include "AbstractFactoryInterface.hxx"
#include "ProductInterface.hxx"

class Application{
public:
    explicit Application(const GUIFactory& factory) : 
         _button(factory.createButton()),
        _checkbox(factory.createCheckbox()) {}
    void render(){
        _button->paint();
        _checkbox->paint();
    }
private:
    std::unique_ptr<Button> _button;
    std::unique_ptr<Checkbox> _checkbox;
};