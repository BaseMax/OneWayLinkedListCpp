/*
 * @Name: One Way Linked List C++
 * @Author: Max Base
 * @Date: 2022-11-14
 * @Repository: https://github.com/basemax/OneWayLinkedListCpp
 */

class Node {
public:
    int data; // Data
    Node* next; // Pointer to next node

    // Node Constructor
    Node(int data);
};

class OneWayLinkedList {
private:
    Node* head; // Pointer to head node
    Node* tail; // Pointer to tail node and Tail is the last node in the list.
    int size; // Size of list
public:
    // OneWayLinkedList Constructor
    OneWayLinkedList();

    // Add new node to the beginning of the list
    void addBegin(int data);

    // Add new node to the end of the list
    void addEnd(int data);

    // Print all nodes
    void print();

    // Delete all nodes
    void deleteAll();

    // Support delete operator
    // ~OneWayLinkedList();
};
