using namespace std;
#include <iostream>

// Creating and traversing a singly linked list
// Make the Node structure
class Node {
    public: 
        int data;
        Node* next; //pointer to the next node
};

// Print contents of linked list starting from a given node
void print(Node* n) {
    while(n != NULL) {
        cout << n->data << endl;
        n = n->next;
    }
}

int main() {
    Node* head = NULL;
    Node* secondNode = NULL;
    Node* thirdNode = NULL;

    // Allocate the nodes into the heap
    head = new Node();
    secondNode = new Node();
    thirdNode = new Node();

    // Assign datas to the node
    head->data = 1;
    secondNode->data = 2;
    thirdNode->data = 3;

    // Assign pointers/links to the next node since this is a singly linked list
    head->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = NULL;

    print(head); 
    
    return 0;
}

// The time complexity of the print function is O(n) because as the input size grows (with the list),
// the longer the algorithm takes. Worst case is when the input size increases.