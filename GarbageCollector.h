#pragma once

class GarbageCollector {
private:
    static GarbageCollector* instance;
    GarbageCollector();
public:
    static GarbageCollector* get_instance();
    static void init();
};

GarbageCollector* GarbageCollector::instance = nullptr;
