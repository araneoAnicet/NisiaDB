#include "Collectable.h"

void Collectable::notify_initialization() {
    GarbageCollector::get_instance()->notify_creation(this);
}
