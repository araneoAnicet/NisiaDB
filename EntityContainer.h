#pragma once
#include "Entity.h"
#include "Selector.h"
#include "Container.h"

class EntityContainer : public Container {
    friend class Selector;
    friend class Finder;
private:
    Entity* entity;
    void set_entity(Entity* entity);
public:
    EntityContainer(bool contains_entity);
    Entity* get();
};
