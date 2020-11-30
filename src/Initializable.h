#pragma once

class Initializer;
class Initializable {
public:
    virtual void init(Initializer* initializer) = 0;
};
#include "Initializer.h"