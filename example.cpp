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

    // Reverse the current list
    cout << "Reverse the list" << endl;
    list->reverse();

    // Print all nodes
    list->print();

    // Reverse the current list with a recursive function
    cout << "Reverse the list with a recursive function" << endl;
    list->reverseRecursive(list->getFirstNode());

    // Print all nodes
    list->print();

    // Print the middle node
    Node* middle = list->getMiddleNode();
    if (middle != NULL) {
        cout << "Middle node: " << middle->data << endl;
    } else {
        cout << "Middle node: NULL" << endl;
    }

    // Print all nodes
    list->print();

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

    // Print count of nodes
    cout << "Count: " << list->count() << endl;

    // Print count of nodes (recursive)
    cout << "Count (recursive): " << list->countRecursive(list->getFirstNode()) << endl;

    // Print the first node
    node = list->getFirstNode();
    if(node != NULL) {
        cout << "First node data: " << node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }

    // Print the last node
    node = list->getLastNode();
    if(node != NULL) {
        cout << "Last node data: " << node->data << endl;
    } else {
        cout << "Node not found" << endl;
    }

    // Deep copy the list
    cout << "Deep copy the list" << endl;
    OneWayLinkedList* list2 = new OneWayLinkedList();
    list2 = list->deepCopy();

    // Deep copy the nodes
    Node* node2 = list->deepCopyNodes();
    if (node2 == NULL) {
        cout << "Node not found" << endl;
    } else {
        cout << "Node data: " << node2->data << endl;
    }

    // Delete all nodes
    cout << "Delete all nodes" << endl;
    list->deleteAll();

    // Print all nodes
    cout << "Print the new list" << endl;
    list2->print();

    // Print all nodes
    cout << "Print the first list" << endl;
    list->print();

    // Print the size of the list
    cout << "Size: " << list->getSize() << endl;

    return 0;
}
