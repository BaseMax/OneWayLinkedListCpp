/*
 * @Name: One Way Linked List C++
 * @Author: Max Base
 * @Date: 2022-11-14
 * @Repository: https://github.com/basemax/OneWayLinkedListCpp
 */

#include <cstddef>
#include <iostream>
#include "OneWayLinkedList.h"

// Node Constructor
Node::Node(int data) {
    this->data = data;
    this->next = NULL;
}

// OneWayLinkedList Constructor
OneWayLinkedList::OneWayLinkedList() {
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

// Add a new node to the beginning of the list
void OneWayLinkedList::addBegin(int data) {
    Node* node = new Node(data);
    if(this->head == NULL) {
        this->head = node;
        this->tail = node;
    } else {
        node->next = this->head;
        this->head = node;
    }
    this->size++;
}

// Add a new node to the end of the list
void OneWayLinkedList::addEnd(int data) {
    Node* node = new Node(data);
    if(this->head == NULL) {
        this->head = node;
        this->tail = node;
    } else {
        this->tail->next = node;
        this->tail = node;
    }
    this->size++;
}

// Check has a node with a specific data in the list or not
bool OneWayLinkedList::has(int data) {
    Node* node = this->head;
    while(node != NULL) {
        if(node->data == data) {
            return true;
        }
        node = node->next;
    }
    return false;
}

// Get the size of the list
int OneWayLinkedList::getSize() {
    return this->size;
}

// Get the node by searching with data
Node* OneWayLinkedList::getNode(int data) {
    Node* node = this->head;
    while(node != NULL) {
        if(node->data == data) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

// Get the first node
Node* OneWayLinkedList::getFirstNode() {
    return this->head;
}

// Get the last node
Node* OneWayLinkedList::getLastNode() {
    // return this->tail;

    Node* node = this->head;
    while(node != NULL) {
        if(node->next == NULL) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

// Get the node by searching with index
Node* OneWayLinkedList::getNodeByIndex(int index) {
    if (index < 0 || index >= this->size) {
        return NULL;
    }

    Node* node = this->head;
    int i = 0;
    while(node != NULL) {
        if(i == index) {
            return node;
        }
        node = node->next;
        i++;
    }
    return NULL;
}

// Print all nodes
void OneWayLinkedList::print() {
    if (this->head == NULL) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node* node = this->head;
    while (node != NULL) {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}

// Delete all nodes
void OneWayLinkedList::deleteAll() {
    Node* node = this->head;
    while (node != NULL) {
        Node* next = node->next;
        delete node;
        node = next;
    }
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

// Delete a node with a specific data
void OneWayLinkedList::deleteNode(int data) {
    Node* node = this->head;
    Node* prev = NULL;
    while (node != NULL) {
        if (node->data == data) {
            if (prev == NULL) {
                this->head = node->next;
            } else {
                prev->next = node->next;
            }
            delete node;
            this->size--;
            return;
        }
        prev = node;
        node = node->next;
    }
}

// Delete a node after a node with a specific index
void OneWayLinkedList::deleteNodeAfterIndex(int index) {
    if (index < 0 || index >= this->size) {
        return;
    }

    Node* node = this->head;
    Node* prev = NULL;
    int i = 0;
    while (node != NULL) {
        if (i == index) {
            if (prev == NULL) {
                this->head = node->next;
            } else {
                prev->next = node->next;
            }
            delete node;
            this->size--;
            return;
        }
        prev = node;
        node = node->next;
        i++;
    }
}

// Delete a node before a node with a specific data
void OneWayLinkedList::deleteNodeBeforeData(int data) {
    Node* node = this->head;
    Node* prev = NULL;
    Node* prevPrev = NULL;
    while (node != NULL) {
        if (node->data == data) {
            if (prevPrev == NULL) {
                this->head = node;
            } else {
                prevPrev->next = node;
            }
            delete prev;
            this->size--;
            return;
        }
        prevPrev = prev;
        prev = node;
        node = node->next;
    }
}


// Delete a node with a specific index
void OneWayLinkedList::deleteNodeByIndex(int index) {
    if (index < 0 || index >= this->size) {
        return;
    }

    Node* node = this->head;
    Node* prev = NULL;
    int i = 0;
    while (node != NULL) {
        if (i == index) {
            if (prev == NULL) {
                this->head = node->next;
            } else {
                prev->next = node->next;
            }
            delete node;
            this->size--;
            return;
        }
        prev = node;
        node = node->next;
        i++;
    }
}

// Delete a node after a node with a specific index
void OneWayLinkedList::deleteNodeAfterData(int data) {
    Node* node = this->head;
    Node* prev = NULL;
    while (node != NULL) {
        if (prev != NULL && prev->data == data) {
            prev->next = node->next;
            delete node;
            this->size--;
            return;
        }
        prev = node;
        node = node->next;
    }
}

// Delete a node before a node with a specific index
void OneWayLinkedList::deleteNodeBeforeIndex(int index) {
    if (index < 0 || index >= this->size) {
        return;
    }

    Node* node = this->head;
    Node* prev = NULL;
    Node* prevPrev = NULL;
    int i = 0;
    while (node != NULL) {
        if (i == index) {
            if (prevPrev == NULL) {
                this->head = node;
            } else {
                prevPrev->next = node;
            }
            delete prev;
            this->size--;
            return;
        }
        prevPrev = prev;
        prev = node;
        node = node->next;
        i++;
    }
}

// Count number of nodes
int OneWayLinkedList::count() {
    int count = 0;
    Node* node = this->head;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

// Count number of nodes with a recursive function
int OneWayLinkedList::countRecursive(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return 1 + countRecursive(node->next);
}

// Reverse the list
void OneWayLinkedList::reverse() {
    Node* prev = NULL;
    Node* current = this->head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    this->head = prev;
}

// Reverse the list with a recursive function
void OneWayLinkedList::reverseRecursive(Node* node) {
    // If the node is the last node
    if (node->next == NULL) {
        this->head = node;
        return;
    }

    // Reverse the rest of the list
    reverseRecursive(node->next);

    // Reverse the current node
    Node* next = node->next;
    next->next = node;

    // Set the next node to NULL
    node->next = NULL;
}

// Get the middle node
Node* OneWayLinkedList::getMiddleNode() {
    Node* slow = this->head;
    Node* fast = this->head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Support delete operator
// OneWayLinkedList::~OneWayLinkedList() {
//     this->deleteAll();
// }
