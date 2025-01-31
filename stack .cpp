#include <iostream>
using namespace std;

class Stack {
private:
    int* stack;
    int top;
    int MAX_SIZE;

public:
    // Constructor to initialize stack with dynamic size
    Stack(int maxSize) : MAX_SIZE(maxSize), top(-1) {
        stack = new int[MAX_SIZE];
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] stack;
    }

    void push(int element) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        stack[++top] = element;
        cout << "Pushed: " << element << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << "Popped: " << stack[top--] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(3);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40); // Should trigger overflow

    stack.display();

    stack.pop();
    stack.display();

    stack.pop();
    stack.pop();
    stack.pop(); // Should trigger underflow

    return 0;
}


























