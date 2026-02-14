# Doubly Linked List Implementation in C

## Explanation of Data Structure

The program uses a structure named `Node` to implement a doubly linked list.

Each node contains:
 `data` → stores the integer value.
 `prev` → pointer to the previous node.
 `next` → pointer to the next node.

This structure allows traversal in both forward and backward directions.


##  Functions

**createNode(int data)**  
Creates a new node, assigns data, and initializes `prev` and `next` to NULL.

**insertAfter(struct Node* head, int key, int data)**  
Searches for the node containing `key` and inserts a new node after it.  
It updates both `prev` and `next` pointers properly.

**deleteNode(struct Node* head, int key)**  
Searches for the node containing `key` and removes it from the list.  
It adjusts neighboring pointers and frees the allocated memory.

**display(struct Node* head)**  
Traverses the list from head to end and prints the node values.


## Overview of main() Method

1. Creates three initial nodes: 10, 20, and 30.  
2. Displays the list.  
3. Inserts 25 after node 20.  
4. Displays the updated list.  
5. Deletes node 10.  
6. Displays the final list.  

The `main()` function demonstrates insertion and deletion clearly.


##  Sample Output
  10 20 30 10 20 25 30 20 25 30
  