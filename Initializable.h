#pragma once
#include "Initializer.h"

class Initializer;
class Initializable {
public:
    virtual void init(Initializer* initializer) = 0;
};
