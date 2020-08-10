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

void GarbageCollector::notify_creation(Collectable* ptr) {  // called by notify_initialization of Collectable object
    // Implementation of an algorithm
}
