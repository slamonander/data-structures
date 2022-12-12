using namespace std;
#include <iostream> 

// Working with singly-linked list functions like searching, deleting, etc.

// Linked List Node
class Node {
    public:
        int data;
        Node* next;
        Node(int x) {
            data = x;
            next = NULL;
        }
};

// Linked List Class
class linkedlist{
    private:
        // Pointers of Node
        Node* head = NULL;
        Node* tail = NULL;

    public:
        // Non-parameterized Constructor
        linkedlist() {
            head = tail = NULL;
        }

        // Copy constructor to copy data members from one list into another
        linkedlist(const linkedlist& list) {
            if (list.head == NULL) {
                head = tail = NULL;
                return;
            }

            Node* temp = list.head;

            // Create new linked list by copying the data
            while (temp != NULL) {
                Node* newNode = new Node(temp->data);

                if (head == NULL) {
                    head = newNode;
                    tail = newNode;
                } else {
                    tail->next = newNode;
                    tail = newNode;
                }
                temp = temp->next;
            }
        }

        // O(N) time
        void insert(int x) {
            Node* temp = new Node(x);

            if (head == NULL) {
                head = temp;
                return;
            } else {
                Node* k = head;
                while (k->next != NULL) {
                    k = k->next;
                }
                k->next = temp;
            }
        }

        // O(N) time
        void print() {
            if (head == NULL) {
                cout << "Empty" << endl;
                return;
            }

            Node* temp = head;
            while (temp!= NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }


};

int main() {
    
    // Time to make a linked list
    linkedlist myList;


    
    // This is current O(n) because we'd have to traverse each Node in the insertion function to the last node
    // in order to insert our data.
    myList.insert(1);
    myList.insert(2);
    myList.insert(3);
    myList.insert(4);
    myList.insert(5);

    // O(N), same idea as above but for printing
    myList.print();

    return 0;
}