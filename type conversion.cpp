#include <iostream>
using namespace std;

class space {
    int x;
    int y;
    int z;

public:
    space() : x(0), y(0), z(0) {}  // default constructor
    space(int a, int b, int c) : x(a), y(b), z(c) {}  // parameterized constructor

    void display(void);
    // Conversion from space to int
    operator int();

    // Conversion from int to space
    space(int sum);
};

void space::display(void) {
    cout << "x = " << x << " ";
    cout << "y = " << y << " ";
    cout << "z = " << z << "\n";
}

// Conversion from space to int
space::operator int() {
    return x + y + z;
}

// Conversion from int to space
space::space(int sum) {
    x = sum / 3;
    y = sum / 3;
    z = sum - x - y;  // Ensuring the total sum remains the same
}

int main() {
    space S1(10, -20, 30);
    cout << "S1: ";
    S1.display();

    // Type conversion from space to int
    int sum = S1;
    cout << "Sum of S1 coordinates: " << sum << "\n";

    // Type conversion from int to space
    space S2 = sum;
    cout << "S2: ";
    S2.display();

    return 0;
}
