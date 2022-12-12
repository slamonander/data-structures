A singly linked list is a linked list that traverses in only one direction from head to tail. It is the simplest type of linked list where every node has some data and a pointer to the next node.

A doubly linked list is a linked list that traverses in both ways left and right. It is the more complex type of the two because every node has a three segments to it:
- data
- pointer to the ``next`` node
- pointer to the ``prev`` node


# Differences
| **Singly Linked List**                                 | **Doubly Linked List**                                 |
| -------------------------------------------------- | -------------------------------------------------- |
| Insertion/Deletion is O(n)                         | Insertion/Deletion is O(1)                         |
| Two segments: Data and link                        | Three Segments: Data and pointers to prev and next |
| Traverses 1 way                                    | Traverses 2 ways                                   |
| Used for executions of stacks                      | Used to execute binary trees, heaps, and stacks    |
| Saves memory and doesn't need to perform searching | Better implementation while searching              |
| Consumes less memory                               | Consumes more memory                               |
