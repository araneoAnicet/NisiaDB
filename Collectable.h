#pragma once
#include <stack>
#include "GarbageCollector.h"

class CollectableNode {
    public:
    CollectableNode(Collectable* ptr) {
        this->ptr = ptr;
    }
    CollectableNode();
    private:
    Collectable* ptr = nullptr;
};

class GarbageCollector;
class Collectable {
private:
    std::stack<CollectableNode*> nodes_pointing_to;
    CollectableNode* me = new CollectableNode(this);
public:
    virtual void remove() = 0;
    void notify_initialization();
    void push_node(CollectableNode* stack_node);
    std::stack<CollectableNode*> get_nodes_pointing_to();
};
