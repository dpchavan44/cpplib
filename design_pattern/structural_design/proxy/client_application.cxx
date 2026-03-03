#include <iostream>
#include "proxy_object.hxx"

int main() {
    std::unique_ptr<Image> image = std::make_unique<ProxyImage>("photo.jpg");
    //till this image is not loaded
    std::cout << "Displaying image " << std::endl;
    image->display();
}