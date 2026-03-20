#include <iostream>
#include <functional>

class GreterThan {
private:
    int threshold;
public:
    GreterThan(int threshold) : threshold (threshold) {}
    // at the end it get convert into obj.operator()(param...)
    // so its just member function
    bool operator()(int x){
        return x > threshold;
    }
};

class Logger {
public:
    Logger(std::string_view prefix) : prefix (prefix) {};
    // at the end it get convert into obj.operator()(param...)
    // so its just member function
    void operator()(std::string message){
        std::cout << prefix << " : " << message << std::endl;
    }
private:
    std::string prefix;
};

int main(){
    GreterThan gt(10);
    std::cout << gt(20) << std::endl;

    std::vector<int> vect {4,7,2,9,4};

    int count = std::count_if(vect.begin(), vect.end(), GreterThan(4));
    std::cout << "Count : " << count << std::endl;

    Logger errorMessage("ERROR");
    Logger infoMessage("INFO");
    errorMessage("Server encounter error");
    infoMessage("Mail sent to recepients");
    return 0;
}