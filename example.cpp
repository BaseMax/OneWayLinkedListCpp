#include <iostream>
#include "OneWayLinkedList.h"

using namespace std;

int main(int argc, char** argv) {
    // Create new list
    OneWayLinkedList* list = new OneWayLinkedList();
    // Add some nodes
    list->addEnd(1);
    list->addEnd(2);
    list->addEnd(3);
    list->addEnd(4);
    list->addEnd(5);
    list->addEnd(110);
    list->addBegin(100);

    // Print all nodes
    list->print();

    // Delete all nodes
    list->deleteAll();

    // Print all nodes
    list->print();

    return 0;
}
