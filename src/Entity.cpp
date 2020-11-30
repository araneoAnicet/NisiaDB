#include "Entity.h"

Entity::Entity() {
    GarbageCollector::get_instance()->notify_creation(this);
    this->me = new CollectableNode(this);
}

Table* Entity::get_table() {
    return this->table;
}

void Entity::init(Initializer* initializer) {
    this->table = initializer->getTable();
    Arguments* temp_args = initializer->getArguments();
    this->arguments = new Arguments();
    for (FloatArgument* arg : temp_args->get_float_arguments()) {
        this->arguments->add(arg->copy());
    }
    for (BoolArgument* arg : temp_args->get_bool_arguments()) {
        this->arguments->add(arg->copy());
    }
    for (EntityArgument* arg : temp_args->get_entity_arguments()) {
        this->arguments->add(arg->copy());
    }
    for (NumberArgument* arg : temp_args->get_number_arguments()) {
        this->arguments->add(arg->copy());
    }
    for (StringArgument* arg : temp_args->get_string_arguments()) {
        this->arguments->add(arg->copy());
    }
}
