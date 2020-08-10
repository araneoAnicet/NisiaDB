#pragma once
#include <stack>
#include "GarbageCollector.h"

class GarbageCollector;
class Collectable {
private:
    typedef struct {
        Collectable* ptr = nullptr;
    } Node;
    std::stack<Node*> nodes_pointing_to;
public:
    virtual void remove() = 0;
    void notify_initialization();
};