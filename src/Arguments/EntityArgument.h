#pragma once
#include "../Entity.h"
#include "Argument.h"

class Entity;
class EntityArgument : public Argument {
private:
    Entity* value;
    int type_id = ENTITY;
public:
    void set_value(Entity* value);
    Entity* get_value();
    EntityArgument* copy();
};
