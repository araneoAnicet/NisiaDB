#pragma once
#include <stack>
#include "GarbageCollector.h"
#include "Initializable.h"
#include "Initializer.h"

class GarbageCollector;
class CollectableNode;
class Collectable : public Initializable {
protected:
    void __delete();
    bool remove_marker = false;
    void init(Initializer* initializer);
    CollectableNode* me;
    std::stack<CollectableNode*> nodes_pointing_to;
    CollectableNode* get_node();
public:
    virtual void remove() = 0;
    void notify_initialization();
    void push_node(CollectableNode* stack_node);
    std::stack<CollectableNode*> get_nodes_pointing_to();
    bool has_remove_marker();
    void set_remove_marker();
};

class CollectableNode {
private:
    Collectable* ptr = nullptr;
public:
    CollectableNode(Collectable* ptr);
    Collectable* get_ptr();
};