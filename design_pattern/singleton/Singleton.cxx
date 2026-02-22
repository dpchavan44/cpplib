#include "Singleton.hxx"

Singleton& Singleton::getInstance(){
    static Singleton instance;
    return instance;
}

void Singleton::log(std::string message){
    std::cout << message;
}