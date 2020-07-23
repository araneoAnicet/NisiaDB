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

bool operator==(const Arguments arguments, Arguments other){
    if (arguments.bool_arguments == other.bool_arguments){
        if (arguments.entity_arguments == other.entity_arguments){
            if (arguments.float_arguments == other.float_arguments){
                if (arguments.number_arguments == other.number_arguments){
                    if (arguments.string_arguments == other.string_arguments){
                        return true;
                    }
                    else
                        return false;
                }
            }
        }
    }
}
