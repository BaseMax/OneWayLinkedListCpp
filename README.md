# One-Way Linked-List C++

This is a simple implementation of a one-way linked-list in C++.

## Usage

```c++
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
list->reverse();

// Reverse the current list with a recursive function
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

// Delete all nodes
list->deleteAll();

// Print all nodes
list->print();

// Print the size of the list
cout << "Size: " << list->getSize() << endl;
```

## License

This project is licensed under the GPL-3.0 License - see the [LICENSE](LICENSE) file for details.

© Copyright (c) 2022 Max Base.
