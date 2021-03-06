#pragma once
#include "Container.h"
#include "Entity.h"
#include <vector>

class Entity;
class EntitiesContainer : public Container {
    friend class Selector;
private:
    std::vector<Entity*> entities;
    void set_entities(std::vector<Entity*> entities);
public:
    EntitiesContainer(bool contains_entity);
    std::vector<Entity*> get();
};
