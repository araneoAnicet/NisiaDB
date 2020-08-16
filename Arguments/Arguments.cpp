#include "Arguments.h"
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

bool operator==(const Arguments arguments, const Arguments other){
    if (arguments.bool_arguments == other.bool_arguments){
        if (arguments.entity_arguments == other.entity_arguments){
            if (arguments.float_arguments == other.float_arguments){
                if (arguments.number_arguments == other.number_arguments){
                    if (arguments.string_arguments == other.string_arguments){
                        return true;
                    }
                }
            }
        }
    }
    return false;
};

std::vector<FloatArgument*> Arguments::get_float_arguments(){
    return this->float_arguments;
}
std::vector<NumberArgument*> Arguments::get_number_arguments(){
    return this->number_arguments;
}
std::vector<StringArgument*> Arguments::get_string_arguments(){
    return this->string_arguments;
}
std::vector<EntityArgument*> Arguments::get_entity_arguments(){
    return this->entity_arguments;
}
std::vector<BoolArgument*> Arguments::get_bool_arguments(){
    return this->bool_arguments;
}

