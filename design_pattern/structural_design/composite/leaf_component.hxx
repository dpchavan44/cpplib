#pragma once
#include <iostream>

#include "file_component_interface.hxx"

class File : public FileSystemComponent {
private:
    std::string _name;
    size_t _size;
public:
    File(std::string name, size_t size) : _name(name), _size(size) {}
    size_t getSize() const override {
        return _size;
    }
    void show(int indent) const override {
        std::cout << std::string(" ", indent);
        std::cout << "File : " << _name
                  << "(Size " << _size << " KB)" << "\n";
    }
};