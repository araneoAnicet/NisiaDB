#include "EntityContainer.h"

EntityContainer::EntityContainer(bool contains_entity): Container(contains_entity) {
}

void EntityContainer::set_entity(Entity* entity) {
    this->entity = entity;
}

Entity* EntityContainer::get() {
    return this->entity;
}
