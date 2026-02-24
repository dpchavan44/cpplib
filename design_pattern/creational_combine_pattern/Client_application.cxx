
#pragma once

#include <iostream>
#include <memory>
#include "Factory_selector.hxx"

int main(){
    //select factroy here client doesn;t know about factory selector
    auto factory = FactorySelector::createFactory();
    //here each call return clone connection
    auto conn1 = factory->createConnection();
    auto conn2 = factory->createConnection();

    //connect
    conn1->connect();
    conn2->connect();

    // command is generated compitable with connection
    auto cmd = factory->createCommand();
    cmd->execute();
    return 0;
}
