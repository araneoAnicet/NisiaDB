#include "Selector.h"

EntityContainer Selector::first() {
    EntityContainer container(this->has_entities);
    if (this->has_entities) {
        container.set_entity( *(this->entities.begin()) );
    }
    return container;
}

std::vector<Entity*> Selector::all() {
    return this->entities;
}
