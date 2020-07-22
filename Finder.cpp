#include "Finder.h"

EntityContainer Finder::by_id(unsigned int id){
    bool entity_found;
    Entity* entity;
    std::vector<Entity*>::iterator left_bound = this->entities->begin();
    std::vector<Entity*>::iterator right_bound = this->entities->end() - 1;
    std::vector<Entity*>::iterator middle = this->entities->begin() + this->entities->size() / 2;
    while (left_bound <= right_bound) {
        if ((**middle).id.get() < id) {
            left_bound = middle + 1;
        }
        else if ((**middle).id.get() == id) {
            entity_found = true;
            entity = *middle;
            break;
        }
        else {
            right_bound = middle - 1;
        }
        middle = left_bound + std::distance(left_bound, right_bound) / 2;
        if (left_bound > right_bound) {
            entity_found = false;
        }
    }
    EntityContainer container(entity_found);
    if (entity_found) {
        container.set_entity(entity);
    }
    return container;
}

Selector Finder::by_arguments(Arguments* arguments) {
    Selector selector;
    selector.has_entities = false;
    for ( Entity* entity : *entities )
    {
        if (entity->arguments.bool_arguments == arguments->bool_arguments){
            if (entity->arguments.float_arguments == arguments->float_arguments) {
                if (entity->arguments.number_arguments == arguments->number_arguments) {
                    if (entity->arguments.string_arguments == arguments->string_arguments) {
                        selector.has_entities = true;
                        selector.entities.push_back(entity);
                    }
                }
            }
        }
    }
    return selector;
}
