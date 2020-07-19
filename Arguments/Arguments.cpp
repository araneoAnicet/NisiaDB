#include <Arguments.h>
void Arguments::add(FloatArgument* argument){
    float_arguments.push_back(argument);
};

void Arguments::add(NumberArgument* argument){
    number_arguments.push_back(argument);
};

void Arguments::add(StringArgument* argument){
    string_arguments.push_back(argument);
};

void Arguments::add(EntityArgument* argument){
    entity_arguments.push_back(argument);
};

void Arguments::add(BoolArgument* argument){
    bool_arguments.push_back(argument);
};