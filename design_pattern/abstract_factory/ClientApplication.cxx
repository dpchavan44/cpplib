#include "ClientApplication.hxx"
#include "ConcreteFactory.hxx"

int main(){
    std::unique_ptr<GUIFactory> factory;
    #ifndef _WIN32
        factory = std::make_unique<WindowsFactory>();
    #else
        factory = std::make_unique<MacFactory>(); 
    #endif
    Application app(*factory); // factory here is pointer so need to pass value which is address
    app.render();
};