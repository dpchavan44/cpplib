#pragma once
#include <iostream>
class FileSystemComponent {
public:
    virtual size_t getSize() const = 0;
    virtual void show(int indent = 0) const = 0;
    virtual ~FileSystemComponent() = default;
};