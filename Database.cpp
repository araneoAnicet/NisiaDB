#include "Database.h"

Database::Database(std::string name) {
    this->name = name;
}

void Database::add_table(Table* table) {
    table->set_database(this);
    this->tables.push_back(table);
}

std::vector<Table*> Database::get_tables() {
    return this->tables;
}

