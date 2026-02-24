#pragma once

#include <iostream>
#include <memory>
#include "AbstractProducts_abstract.hxx"
// in this class we will define db factroy like connection and command belongs to the same DB

class DatabseFactroy {
public:
    virtual ~DatabseFactroy() = default;
    // this two method needs to implement by sub class and which will return actual product of family
    virtual std::unique_ptr<DBConnection> createConnection() const = 0;
    virtual std::unique_ptr<DBCommand> createCommand() const = 0;
};