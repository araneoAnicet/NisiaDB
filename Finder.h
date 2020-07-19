#pragma once
#include <EntityContainer>

class Finder{
private:

public:
    EntityContainer byID(unsigned int id);
    Selector byArguments(Arguments* Arguments);
private:
    void SetArguments(Arguments* Arguments);
};
