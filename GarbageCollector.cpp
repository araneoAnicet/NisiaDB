#include "GarbageCollector.h"

void GarbageCollector::init() {
    if (GarbageCollector::instance != nullptr) {
        GarbageCollector::instance = new GarbageCollector();
    }
}

GarbageCollector* GarbageCollector::get_instance() {
    return GarbageCollector::instance;
}

// called by remove() methods of Collectable objects
void GarbageCollector::get_notification() {
    this->__mark(this->data.get_head()->value);
    this->__sweep();
}

// called by notify_initialization of Collectable object
void GarbageCollector::notify_creation(Collectable* ptr) {
    this->data.add(ptr);
}

void GarbageCollector::__mark(Collectable* collectable) {
    std::stack<CollectableNode*> temp_stack = collectable->get_nodes_pointing_to();;
    while (!(temp_stack.empty())) {
        this->__mark(temp_stack.top()->get_ptr());
        temp_stack.pop();
    }
    collectable->set_remove_marker();
}

void GarbageCollector::__sweep() {
    LinkedListNode<Collectable*>* current_node = this->data.get_head() ;
    while (current_node->next != nullptr) {
        if (current_node->value->has_remove_marker()) {
            delete current_node->value;
        }
        current_node = current_node->next;
    }
}
