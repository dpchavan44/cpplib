#include <iostream>
#include <functional>

class AddNumbers {
public:
    void add(int a, int b){
        std::cout << " Addition : " << (a+b) << std::endl;
    }
};

int main(){
    AddNumbers obj;
    //storing address of member function
    //each member functions work with object so we need to pass object while calling member function
    std::function<void(AddNumbers&, int, int)> member_func = &AddNumbers::add;
    member_func(obj,5,6);
    return 0;
}