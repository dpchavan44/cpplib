#pragma once
#include <iostream>
#include <memory>
#include "common_interface.hxx"
#include "real_object.hxx"
// This class will be responsive to load and cache object, its proxy for real object.
// Proxy image

class ProxyImage : public Image {
private:
    std::string filename;
    std::unique_ptr<RealImage> realImage;
public:
    explicit ProxyImage(std::string file) : filename(std::move(file)) {}
    void display() override {
        //check if real image loaded or not if not load first time
        if(!realImage) {
            realImage = std::make_unique<RealImage>(filename);
        }
        realImage->display();
    }
};