#pragma once
#include "Initializer.h"

class Initializable {
public:
    virtual void init(Initializer* initializer) = 0;
};
