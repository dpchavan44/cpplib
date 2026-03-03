#pragma once
#include <iostream>
#include "common_interface.hxx"
//This class will be responsible to load real object/image on UI
class RealImage : public Image {
private:
    std::string filename;
    void load_image_from_disk(std::string file){
        std::cout << "Loading image from disk : " << file << std::endl;
    }
public:
    //image will get load from contructing objects itself
    explicit RealImage(std::string file) : filename(std::move(file)) {
        load_image_from_disk(filename);
    }
    void display() override {
        std::cout << "Displying image : " << filename << std::endl;
    }
};