#include "Selector.h"

EntityContainer Selector::first() {
    EntityContainer container(this->has_entities);
    if (this->has_entities) {
        container.set_entity( *(this->entities.begin()) );
    }
    return container;
}

EntitiesContainer Selector::all() {
    EntitiesContainer container(this->has_entities);
    if (this->has_entities) {
        container.set_entities(this->entities);
    }
    return container;
}
