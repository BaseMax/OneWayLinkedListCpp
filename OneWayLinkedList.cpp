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

// Add new node to the end of the list
void OneWayLinkedList::add(int data) {
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

// Print all nodes
void OneWayLinkedList::print() {
    Node* node = this->head;
    while(node != NULL) {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}

