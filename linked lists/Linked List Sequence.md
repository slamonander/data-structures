Linked List uses pointers in a way where each element is stored into a **node**, which has a pointer to the next node in the sequence. Nodes can be manipulated by relinking pointers.

The first node of the sequence is called **the head**. Insertion and deletion operations from the front has the time complexity of O(1). But, the get and set operations will take O(n).

The last node of the linked list has the next pointer as ``NULL``, which indicates the end of the list. 

# Data Structures and Worst Case
| Data Structure | Container    | Static                      | Dynamic                              | Dynamics                                                         |
| -------------- | ------------ | --------------------------- | ------------------------------------ | ---------------------------------------------------------------- |
| Code           | ``build(x)`` | ``get(i)`` and ``set(i,x)`` | ``insert_first(x), delete_first(x)`` | ``insert_last(x), delete_last(), insert_at(i, x), delete_at(i)`` |
| Array          | n            | n                           | 1                                    | n                                                                |


# Advantages and Applications

## Arrays vs. Linked Lists
Linked list size is dynamic rather than fixed and insertion/deletion operations runs at O(1) instead of O(n) like in arrays.

However, it is not possible to have random access to an element (``node->next`` moment...) and extra memory space is needed for the next pointer.

## Applications
- Implements stacks and queues
- Graphs
- Whenever a program needs dynamic allocation memory
