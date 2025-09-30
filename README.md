# Linked-list-cpp
# Aim: To study the concept of Linked List in C++ and implement creation of a single node and linking multiple nodes.

# Tools: GNU g++ compiler for local compilation or any online C++ compiler.

# Theory
A Linked List is a linear data structure where elements are stored in nodes. Each node contains two parts:

Data – stores the actual value.
Pointer (next) – stores the address of the next node.
Unlike arrays, linked lists are dynamic in nature and do not require contiguous memory allocation. They allow efficient insertion and deletion operations but require sequential access for traversal.

# Types of Linked Lists
Singly Linked List – each node points to the next node.
Doubly Linked List – each node has two pointers: one to the next node and one to the previous node.
Circular Linked List – the last node connects back to the first node.
Syntax
class Node {
    data_type data;   // stores value
    Node* next;       // pointer to next node
};
# Program 1: Creation of a Single Node
# Logic:
A Node class is created with data and pointer. A single node is created dynamically. The program demonstrates how values and pointers are stored.

# Algorithm:
Start
Define a class Node with val and next.
Create a new node with data.
Display the node’s value and pointer.
End
Program 2: Linking Multiple Nodes
Logic:
Multiple nodes are created dynamically.They are linked together using next pointers. A temporary pointer is used to traverse and print values.

# Algorithm:
Start
Define a class Node with data and pointer.
Create multiple nodes.
Link them using next pointers.
Traverse using a temporary pointer until NULL.
Print node values.
End
Program 3: Head in Linked List
Logic:
A Link class is created with data and next pointer. A function is used to add a new node at the beginning of the linked list. A function is used to traverse and display the list after each insertion.

# Algorithm:
Start
Define a class Link with data and next pointer.
Create a function to insert a node at head.
Create a function to traverse and print nodes.
Initialize head as NULL.
Insert nodes at head one by one.
Display the list after each insertion.
End
# Conclusion
Linked lists are dynamic data structures that allow flexible memory usage and efficient insertion/deletion. By creating nodes, linking them, and performing head insertions, we can represent sequences without requiring continuous memory like arrays.# 
