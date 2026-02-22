#include "Singleton.hxx"

int main(){
    Singleton::getInstance().log("Logging Message");
    return 0;
}