#pragma once

#include <iostream>
#include <memory>
//here we will crate abstract product like DBConnection and DBCommands

class DBConnection {
public:
    virtual ~DBConnection() = default;
    //this clone method will acts as virtual constrcutor to copy base connection details
    virtual std::unique_ptr<DBConnection> clone() const = 0;
    //we will define connect method wih will implement by concreate product like mysql, oracle
    virtual void connect() const = 0;
};

class DBCommand {
public:
    virtual ~DBCommand() = default;
    virtual void execute() const = 0;
};