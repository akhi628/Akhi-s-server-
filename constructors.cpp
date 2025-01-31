#include <iostream>
using namespace std;

class person {
private:
    int id;
    float cg;

public:
    // Parameterized constructor
    person(int x, float y) {
        id = x;
        cg = y;
    }

    // Member function declaration
    void printdata(void);
};

// Member function definition
void person::printdata(void) {
    cout << id << " " << cg << endl;
}

int main() {
    person Akhi(1304, 3.80); // Calls parameterized constructor
    Akhi.printdata(); // Calls member function

    return 0;
}
