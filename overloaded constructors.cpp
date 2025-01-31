#include <iostream>
using namespace std;

class Complex {
    float x, y;
public:
    // Default constructor
    Complex() : x(0), y(0) {}

    // Single parameter constructor
    Complex(float a) : x(a), y(a) {}

    // Two parameters constructor
    Complex(float real, float imag) : x(real), y(imag) {}

    // Friend function declarations
    friend Complex sum(const Complex& c1, const Complex& c2);
    friend void show(const Complex& c);
};

// Friend function to sum two Complex numbers
Complex sum(const Complex& c1, const Complex& c2) {
    return Complex(c1.x + c2.x, c1.y + c2.y);
}

// Friend function to show a Complex number
void show(const Complex& c) {
    cout << c.x << " + j" << c.y << "\n";
}

int main() {
    Complex A(2.7, 3.5);
    Complex B(1.6);
    Complex C = sum(A, B);

    cout << "A = "; show(A);
    cout << "B = "; show(B);
    cout << "C = "; show(C);

    Complex P(2.5, 3.9), Q(1.6, 2.5), R = sum(P, Q);
    cout << "\nP = "; show(P);
    cout << "Q = "; show(Q);
    cout << "R = "; show(R);

    return 0;
}
