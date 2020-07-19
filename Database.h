#pragma once
#include <string>
#include <vector>
#include <iterator>
#include "Table.h"

class Database {
private:
    std::string name;
    std::vector<Table*> tables;
public:
    Database(std::string name);
    void add_table(Table* table);
    std::vector<Table*> get_tables();
};
