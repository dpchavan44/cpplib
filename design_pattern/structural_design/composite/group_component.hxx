#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "file_component_interface.hxx"

class Folder : public FileSystemComponent {
private:
    std::string _folder_name;
    std::vector<std::unique_ptr<FileSystemComponent>> fileSystem; // Leaf level system component
public:
    Folder(std::string name) : _folder_name (name) {}

    void add(std::unique_ptr<FileSystemComponent> component) {
        fileSystem.push_back(std::move(component));
    }

    void show(int indent) const override {
        std::cout << std::string(" ", indent);
        std::cout<< "Folder Name : " << _folder_name << "\n";
        for(const auto& child : fileSystem) {
            child->show(indent+2);
        }
    }
    size_t getSize() const override {
        size_t total_size = 0;
        for (const auto& child : fileSystem) {
            total_size += child->getSize();
        }
        return total_size;
    }
};