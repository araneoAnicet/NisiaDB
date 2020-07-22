#pragma once

class Notified {
public:
    virtual void get_remove_notification(unsigned int notifier_id) = 0;
    virtual void get_change_notification(unsigned int changed_field_id) = 0;
};
