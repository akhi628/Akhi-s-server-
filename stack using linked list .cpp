#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class stack {
private:
    node* top;
    int size;
    int MAX_SIZE;

public:

    stack(int maxsize) {
        MAX_SIZE = maxsize;
        top = NULL;
        size = 0;
    }

    void push(int element) {
        if (size == MAX_SIZE) {
            cout << "Stack overflow" << endl;
            return;
        }
        node* newnode = new node();
        newnode->data = element;
        newnode->next = top;
        top = newnode;
        size++;
        cout << "Pushed: " << element << endl;
    }

   void pop() {
        if (top == NULL) {
            cout << "Stack underflow" << endl;
            return;
        }
        int element = top->data;
        node* temp = top;
        top = top->next;
        delete temp;
        size--;
        cout << "Popped: " << element << endl;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        node* temp = top;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) {
                cout << " ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    ~stack() {
        while (top != NULL) {
            pop();
        }
    }
};


  int main() {
    stack s(3);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop();

    return 0;
}
