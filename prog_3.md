# Reverse Traversal of Linked List in C

## Data Structure 

The program uses a singly linked list.

struct Node {
    int data;
    struct Node* next;
};

- data → Stores the integer value.
- next → Stores the address of the next node.
- Each node connects to another node forming a chain structure.



## Functions

1. createNode(int data)

Purpose:
Creates a new node dynamically.

Working:
- Allocates memory using malloc().
- Assigns the given value to data.
- Sets next to NULL.
- Returns the created node.

2. reverseTraversal(struct Node* head)

Purpose:
Prints the linked list in reverse order using recursion.

Working:
- If head is NULL, return.
- Recursively call reverseTraversal(head->next).
- Print the data after recursion returns.
- This prints elements from last to first.


## Organization of main() Function

The main() function:

1. Creates the first node with value 10.
2. Links nodes with values 20, 30, and 40.
3. Calls reverseTraversal(head) to print in reverse order.
4. Frees allocated memory using a loop.
5. Returns 0 to indicate successful execution.


## Sample Output

40 30 20 10

