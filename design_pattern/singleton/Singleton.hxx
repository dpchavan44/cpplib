#include <iostream>

class Singleton {
public:
    static Singleton& getInstance();
    void log(std::string message);
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;
private:
    Singleton() = default;
    ~Singleton() = default;
};