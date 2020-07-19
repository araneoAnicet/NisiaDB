#include "Table.h"

Table::Table(std::string name) {
    this->name = name;
}

std::string Table::get_name() {
    return this->name;
}

void Table::add(Entity* entity) {
    this->entities.push_back(entity);
}
