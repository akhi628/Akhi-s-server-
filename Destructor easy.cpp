#include <iostream>
using namespace std;

class Person {
    int id;
    float cg;

public:
    // Parameterized constructor
    Person(int x, float y) {
        id = x;
        cg = y;
        cout << "Parameterized Constructor called for ID: " << id << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for ID: " << id << endl;
    }

    void display() {
        cout << id << " " << cg << endl;
    }
};

int main() {
    Person p(1304, 3.75);  // Calls the parameterized constructor
    p.display();  // Output: 101 3.75

    // The destructor will be automatically called here when 'p' goes out of scope

    return 0;
}
