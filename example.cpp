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

    // Print the size of the list
    cout << "Size: " << list->getSize() << endl;

    // Check has a node with a specific data in the list or not
    cout << "Has 110: " << list->has(110) << endl;
    cout << "Has 111: " << list->has(111) << endl;

    // Get the node by searching with data
    Node* node = list->getNode(110);
    if(node != NULL) {
        cout << "Node data: " << node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }

    // Get the node by searching with index
    node = list->getNodeByIndex(0);
    if(node != NULL) {
        cout << "Node data: " << node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }

    // Get the node by searching with index
    node = list->getNodeByIndex(60);
    if(node != NULL) {
        cout << "Node data: " << node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }

    // Delete all nodes
    list->deleteAll();

    // Print all nodes
    list->print();

    // Print the size of the list
    cout << "Size: " << list->getSize() << endl;

    return 0;
}
