#include "GarbageCollector.h"

void GarbageCollector::init() {
    if (GarbageCollector::instance != nullptr) {
        GarbageCollector::instance = new GarbageCollector();
    }
}

GarbageCollector* GarbageCollector::get_instance() {
    return GarbageCollector::instance;
}

void GarbageCollector::get_notification() {  // called by remove() methods of Collectable objects
    // Implementation of an algorithm
}

// called by notify_initialization of Collectable object
void GarbageCollector::notify_creation(Collectable* ptr) {
    this->data.add(ptr);
}

void GarbageCollector::__mark(Collectable* collectable) {
    std::stack<CollectableNode*> temp_stack = collectable->get_nodes_pointing_to();;
    while (!(temp_stack.empty())) {
        this->__mark(temp_stack.top()->get_ptr());
        collectable->set_remove_marker();
        temp_stack.pop();
    }
}
