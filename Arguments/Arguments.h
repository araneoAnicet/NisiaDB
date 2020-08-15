#pragma once
#include <string>
#include <vector>
#include "BoolArgument.h"
#include "EntityArgument.h"
#include "FloatArgument.h"
#include "NumberArgument.h"
#include "StringArgument.h"

class Arguments {
    friend class Finder;
    friend bool operator== (const Arguments arguments,const Arguments other);
private:
    std::vector<FloatArgument*> float_arguments;
    std::vector<NumberArgument*> number_arguments;
    std::vector<StringArgument*> string_arguments;
    std::vector<EntityArgument*> entity_arguments;
    std::vector<BoolArgument*> bool_arguments;
public:
    void add(FloatArgument* argument);
    void add(NumberArgument* argument);
    void add(StringArgument* argument);
    void add(EntityArgument* argument);
    void add(BoolArgument* argument);

    std::vector<FloatArgument*> get_float_arguments();
    std::vector<NumberArgument*> get_number_arguments();
    std::vector<StringArgument*> get_string_arguments();
    std::vector<EntityArgument*> get_entity_arguments();
    std::vector<BoolArgument*> get_bool_arguments();
    std::vector<Argument*> get_all();
};
