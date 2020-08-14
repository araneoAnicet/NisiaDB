#include "Collectable.h"

void Collectable::notify_initialization() {
    GarbageCollector::get_instance()->notify_creation(this);
}

void Collectable::push_node(CollectableNode* stack_node) {
    this->nodes_pointing_to.push(stack_node);
}

std::stack<CollectableNode*> Collectable::get_nodes_pointing_to() {
    return this->nodes_pointing_to;
}
