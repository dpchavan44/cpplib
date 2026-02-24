#pragma once

#include <iostream>
#include <memory>
#include "DBfactory_abstract_factory.hxx"
#include "DBConcreteFactoryProduct.hxx"
#include "Configmanager_singleton.hxx"

//factory method hides concrete factory selection

class FactorySelector {
public:
    static std::unique_ptr<DatabseFactroy> createFactory() {
        auto dbType = Configmanager::getInstance().dbType();

        if (dbType == "mysql"){
            return std::make_unique<MysqlFactory>();
        }
        throw std::runtime_error("Un handled DB connection");
    }
};