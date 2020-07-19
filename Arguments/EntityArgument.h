#pragma once
#include "../Entity.h"
#include "Argument.h"

class EntityArgument : public Argument {
private:
    Entity* value;
public:
    void set_value(Entity* value);
    Entity* get_value();
};
