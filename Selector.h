#pragma once
#include <vector>
#include "Entity.h"
#include "EntityContainer.h"
#include "EntitiesContainer.h"

class Entity;
class EntityContainer;
class Selector {
    friend class Finder;
private:
    bool has_entities;
    std::vector<Entity*> entities;
public:
    EntityContainer first();
    EntitiesContainer all();
};
