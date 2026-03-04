#include <iostream>
#include <memory>
#include "group_component.hxx"
#include "leaf_component.hxx"
#include "file_component_interface.hxx"

int main(){
    auto root = std::make_unique<Folder>("Root");
    root->add(std::make_unique<File>("main.cpp", 10));
    root->add(std::make_unique<File>("components.cpp", 15));

    auto subFolder = std::make_unique<Folder>("utils");
    subFolder->add(std::make_unique<File>("utils.cpp", 20));
    subFolder->add(std::make_unique<File>("common.cpp", 50));

    root->getSize();
    root->show(1);

    subFolder->getSize();
    subFolder->show(1);
    std::cout << "After adding sub folder into root" << std::endl;
    root->add(std::move(subFolder));
    root->getSize();
    root->show(1);

    return 0;
}