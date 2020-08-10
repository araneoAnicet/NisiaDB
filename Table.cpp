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

std::vector<Entity*> Table::get_entities() {
    return this->entities;
}

void Table::show() {
    std::cout << "ARGUMENTS " << this->name << std::endl;
    for (Argument* argument : arguments->get_all()) {
        std::cout << argument->get_name();
    }
    std::cout << std::endl;
    std::cout << "ENTITIES " << this->name << std::endl;
    for (Entity* entity : this->entities) {
        std::cout << entity->id.get() << std::endl;
    }
}

void Table::init(Initializer* initializer) {
    this->find = initializer->getFinder();
    this->arguments = initializer->getArguments();
    this->database = initializer->getDatabase();
    find->entities = &(this->entities);
}
