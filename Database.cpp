#include "Database.h"

Database::Database(std::string name) {
    this->name = name;
}

void Database::add_table(Table* table) {
    this->tables.push_back(table);
}

std::vector<Table*> Database::get_tables() {
    return this->tables;
}

void Database::show() {
    std::cout << "TABLES " << this->name << std::endl;
    for (Table* table : this->tables) {
        std::cout << "\t" << table->get_name() << std::endl;
    }
}
