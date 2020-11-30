#include "Database.h"

Database::Database(std::string name) {
    GarbageCollector::get_instance()->notify_creation(this);
    this->me = new CollectableNode(this);
    this->name = name;
}

void Database::add_table(Table* table) {
    this->nodes_pointing_to.push(table->get_node());
    this->tables.push_back(table);
}

std::vector<Table*> Database::get_tables() {
    return this->tables;
}

void Database::show() {
    std::cout << "TABLES OF DATABASE " << this->name << "; ID: " << this->id.get() << std::endl;
    for (Table* table : this->tables) {
        std::cout << "\t" << table->id.get() <<" " << table->get_name() << std::endl;
    }
}
