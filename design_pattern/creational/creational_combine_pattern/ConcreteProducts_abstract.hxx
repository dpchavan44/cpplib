#pragma once

#include <iostream>
#include <memory>
#include "AbstractProducts_abstract.hxx"
// here we are creating concreate products right now we are delaing with mysql db only
class MysqlConnection final : public DBConnection {
private:
    std::string host;
    int poolSize;
public:
    // this constructor will be used by only builder
    MysqlConnection(std::string h, int p) : host(h),poolSize(p){}

    std::unique_ptr<DBConnection> clone() const override {
        return std::make_unique<MysqlConnection> (host,poolSize);
    }

    void connect() const override {
        std::cout << "Connecting with MySql server with host :" << host << " Pool size :"<< poolSize << std::endl;
    }
};

class MysqlCommand final : public DBCommand {
public:
    virtual ~MysqlCommand() = default;
    void execute() const override {
        std::cout << "Executing the mysql command" << std::endl;
    } 
};