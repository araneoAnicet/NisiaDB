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
    std::cout << "PARAMS OF TABLE " << this->name << "; ID: " << this->id.get() << std::endl;
    std::cout << "ARGUMENTS" << std::endl;

    for (BoolArgument* argument : arguments->get_bool_arguments()) {
        std::cout << argument->get_name() << std::endl;
    }

    for (NumberArgument* argument : arguments->get_number_arguments()) {
        std::cout << argument->get_name() << std::endl;
    }

    for (FloatArgument* argument : arguments->get_float_arguments()) {
        std::cout << argument->get_name() << std::endl;
    }

    for (StringArgument* argument : arguments->get_string_arguments()) {
        std::cout << argument->get_name() << std::endl;
    }

    std::cout << "ENTITIES" << std::endl;
    for (EntityArgument* argument : arguments->get_entity_arguments()) {
        std::cout << argument->get_value()->id.get() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "ENTITIES" << std::endl;
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
