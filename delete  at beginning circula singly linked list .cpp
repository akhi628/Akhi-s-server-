//deletion at the beginning circular singly linked list


#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node *a = NULL, *b = NULL, *c = NULL, *d = NULL;
    a = new Node();
    b = new Node();
    c = new Node();
    d = new Node();
    cout << "Enter data for four nodes: ";
    cin >> a->data >> b->data >> c->data >> d->data;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;
    Node* head = a;
    int position;
    cout << "Enter position to delete (1-based index): ";
    cin >> position;
        if (position == 1) {  // Delete the first node
            Node* temp = head;
// If there's only one node
            if (head->next == head) {
                delete head;
                head = nullptr;
            } else {
                // Find the last node
                Node* last = head;
                while (last->next != head) {
                    last = last->next;
                }
// Update the last node's next to skip the current head
                last->next = head->next;
                head = head->next;  // Update head
                delete temp;        // Delete the old head
            }
        } else {  // Delete a node at a specific position
            Node* temp = head;
            Node* prev = NULL;
// Traverse to the node at (position - 1)
            for (int i = 1; i < position && temp->next != head; ++i) {
                prev = temp;
                temp = temp->next;
            }
            if (temp != head) {
                prev->next = temp->next;  // Update the previous node's next
                delete temp;              // Delete the target node
            } else {
                cout << "Invalid position!" << endl;
            }
        }
    cout << "Circular Singly Linked List after deletion: ";
    if (head != NULL) {
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
    cout << endl;
    return 0;
}
