#pragma once
#include <stack>
#include "GarbageCollector.h"

class CollectableNode {
private:
    Collectable* ptr = nullptr;
public:
    CollectableNode(Collectable* ptr);
};

class GarbageCollector;
class Collectable {
private:
    bool remove_marker;
    std::stack<CollectableNode*> nodes_pointing_to;
    CollectableNode* me = new CollectableNode(this);
public:
    virtual void remove() = 0;
    void notify_initialization();
    void push_node(CollectableNode* stack_node);
    std::stack<CollectableNode*> get_nodes_pointing_to();
    bool get_remove_marker();
    void set_remove_marker(bool value);
};
