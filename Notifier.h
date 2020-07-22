#pragma once

class Notifier {
public:
    virtual void notify_remove() = 0;
    virtual void notify_change() = 0;
};
