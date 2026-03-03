#include <iostream>

class Configmanager {
public:
    static Configmanager& getInstance() {
        static Configmanager instance;
        return instance;
    }
    std::string dbType() const{
        return "mysql"; //  imagine this we read it from configuration file
    }
private:
    Configmanager() = default;
};