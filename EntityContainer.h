#pragma once
#include "Entity.h"

class EntityContainer {
private:
    Entity* entity;
    bool contains_entity;
    void set_entity(Entity* entity);
public:
    EntityContainer(bool contains_entity);
    bool has_entity();
    Entity* get();
};
