#pragma once

#include <iostream>
#include <memory>
#include "DBfactory_abstract_factory.hxx"
#include "MySqlConnection_builder.hxx"

class MysqlFactory final : public DatabseFactroy {
private:
    std::unique_ptr<DBConnection> protoType;
public:
    MysqlFactory() {
        //build expensive object once and re use it
        protoType = MysqlConnectionBuilder().setHost("localhost").setPoolsize(3).build();
    }
    std::unique_ptr<DBConnection> createConnection() const override {
        // instead of creating every time we just clone it
        return protoType->clone();
    }
    std::unique_ptr<DBCommand> createCommand() const override{
        return std::make_unique<MysqlCommand>();
    }
};