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

    Node(int data); // Constructor

class OneWayLinkedList {
private:
    Node* head; // Pointer to head node
    Node* tail; // Pointer to tail node and Tail is the last node in the list.
    int size; // Size of list
public:
    OneWayLinkedList(); // Constructor
    void OneWayLinkedList::add(int data);
    void OneWayLinkedList::print();
};
