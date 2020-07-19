#pragma once
#include "Entity.h"
#include "Selector.h"

class EntityContainer {
    friend class Selector;
private:
    Entity* entity;
    bool contains_entity;
    void set_entity(Entity* entity);
public:
    EntityContainer(bool contains_entity);
    bool has_entity();
    Entity* get();
};
