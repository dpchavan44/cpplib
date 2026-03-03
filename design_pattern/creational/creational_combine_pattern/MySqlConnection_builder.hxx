#pragma once

#include <iostream>
#include "ConcreteProducts_abstract.hxx"

// this builder class used to create mysql connection step by step
class MysqlConnectionBuilder {
private:
    std::string host;
    int poolSize;
public:
    MysqlConnectionBuilder& setHost(std::string h){
        host = std::move(h);
        return *this;
    }
    MysqlConnectionBuilder& setPoolsize(int p){
        poolSize = std::move(p);
        return *this;
    }
    std::unique_ptr<MysqlConnection> build() {
        return std::make_unique<MysqlConnection>(host, poolSize);
    }
};