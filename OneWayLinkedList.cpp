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

// Support delete operator
// OneWayLinkedList::~OneWayLinkedList() {
//     this->deleteAll();
// }
