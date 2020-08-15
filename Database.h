#pragma once
#include <string>
#include <vector>
#include <iterator>
#include <iostream>
#include "Table.h"
#include "CanShow.h"
#include "Identity.h"

class Table;
class Database : public CanShow {
private:
    std::string name;
    std::vector<Table*> tables;
public:
    Identity id;
    Database(std::string name);
    void add_table(Table* table);
    std::vector<Table*> get_tables();
    void show() override;
};
