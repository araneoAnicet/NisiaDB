#pragma once
#include "Notified.h"
#include "Collectable.h"
#include "LinkedList.h"

class Collectalbe;
class GarbageCollector : public Notified {
private:
    static GarbageCollector* instance;
    GarbageCollector();
    LinkedList<Collectable*> data;
public:
    static GarbageCollector* get_instance();
    static void init();
    void notify_creation(Collectable* ptr);
    void get_notification() override;
};

GarbageCollector* GarbageCollector::instance = nullptr;
