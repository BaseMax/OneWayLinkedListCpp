#include <iostream>
#include "OneWayLinkedList.h"

using namespace std;

int main(int argc, char** argv) {
    OneWayLinkedList* list = new OneWayLinkedList();
    list->add(1);
    list->add(2);
    list->add(3);
    list->add(4);
    list->add(5);

    list->print();

    delete list;

    return 0;
}
