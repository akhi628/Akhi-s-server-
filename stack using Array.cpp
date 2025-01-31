#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int MAX_SIZE;

public:

    Stack(int maxsize) : MAX_SIZE(maxsize), top(-1) {
        arr = new int[MAX_SIZE];
    }


    ~Stack() {
        delete[] arr;
    }
  void push(int element) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = element;
        cout << "Pushed: " << element << endl;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }


    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(3);

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
