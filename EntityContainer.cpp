#include "EntityContainer.h"

EntityContainer::EntityContainer(bool contains_entity) {
    this->contains_entity = contains_entity;
}

bool EntityContainer::has_entity() {
    return this->contains_entity;
}

void EntityContainer::set_entity(Entity* entity) {
    this->entity = entity;
}

Entity* EntityContainer::get() {
    return this->entity;
}
