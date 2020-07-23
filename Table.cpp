#include "Table.h"


Table::Table(std::string name) {
    this->name = name;
    this->find.entities = &(this->entities);
}

std::string Table::get_name() {
    return this->name;
}

void Table::add(Entity* entity) {
    entity->set_table(this);
    this->entities.push_back(entity);
}

void Table::set_database(Database* database) {
    this->database = database;
}

std::vector<Entity*> Table::get_entities() {
    return this->entities;
}

void Table::show() {
    std::cout << "ARGUMENTS " << this->name << std::endl;
    for (Argument* argument : this->arguments.get_all()) {
        std::cout << argument->get_name();
    }
    std::cout << std::endl;
    std::cout << "ENTITIES " << this->name << std::endl;
    for (Entity* entity : this->entities) {
        std::cout << entity->id.get() << std::endl;
    }
}
