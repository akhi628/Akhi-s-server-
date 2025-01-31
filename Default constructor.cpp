#include <iostream>
using namespace std;

class Person {
    int id;
    float cg;

public:
    // Default constructor
    Person() {
        id = 0;
        cg = 0.0;
    }

    void display() {
        cout << "ID: " << id << ", CG: " << cg << endl;
    }
};

int main() {
    Person p;  // Calls the default constructor
    p.display();

    return 0;
}
