#include <Arguments.h>
void Arguments::add(FloatArgument* argument){
    this->argument.push_back(argument);
};

void Arguments::add(NumberArgument* argument){
    this->argument.push_back(argument);
};

void Arguments::add(StringArgument* argument){
    this->argument.push_back(argument);
};

void Arguments::add(EntityArgument* argument){
    this->argument.push_back(argument);
};

void Arguments::add(BoolArgument* argument){
    this->argument.push_back(argument);
};