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

// notify GC about object removing
void Collectable::__delete() {
    GarbageCollector::get_instance()->get_notification();
}

bool Collectable::get_remove_marker(){
    return this->remove_marker;
}

void Collectable::set_remove_marker(){
    this->remove_marker = true;
}

CollectableNode::CollectableNode(Collectable* ptr) {
    this->ptr = ptr;
}
