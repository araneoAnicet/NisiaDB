#pragma once
#include "Notified.h"

class GarbageCollector : public Notified {
private:
    static GarbageCollector* instance;
    GarbageCollector();
public:
    static GarbageCollector* get_instance();
    static void init();
    void get_notification() override;
};

GarbageCollector* GarbageCollector::instance = nullptr;
