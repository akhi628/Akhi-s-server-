#include <iostream>
using namespace std;

class space {
    int x;
    int y;
    int z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    space operator+(space);  // overload binary plus
};

void space::getdata(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

void space::display(void) {
    cout << "x = " << x << " ";
    cout << "y = " << y << " ";
    cout << "z = " << z << "\n";
}

space space::operator+(space s) {
    space temp;
    temp.x = x + s.x;
    temp.y = y + s.y;
    temp.z = z + s.z;
    return temp;
}

int main() {
    space S1, S2, S3;
    S1.getdata(10, -20, 30);
    S2.getdata(-5, 15, -25);

    cout << "S1: ";
    S1.display();

    cout << "S2: ";
    S2.display();

    S3 = S1 + S2;  // activates operator+() function
    cout << "S1 + S2: ";
    S3.display();

    return 0;
}
