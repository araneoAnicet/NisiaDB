#include "EntitiesContainer.h"

EntitiesContainer::EntitiesContainer(bool contains_entity): Container(contains_entity) {
}

void EntitiesContainer::set_entities(std::vector<Entity*> entities) {
    this->entities = entities;
}

std::vector<Entity*> EntitiesContainer::get() {
    return this->entities;
}
