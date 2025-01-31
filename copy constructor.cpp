#include <iostream>
using namespace std;

class Code {
  int id;

public:
  Code() {}  // Default constructor initializing id to 0
  Code(int a) { id = a; }  // Parameterized constructor
  Code(const Code &x)  { id = x . id; }  // Copy constructor
  void display() const { cout << id; }  // Display function
};

int main() {
  Code A(100);  // Parameterized constructor
  Code B(A);  // Copy constructor
  Code C = A;  // Copy constructor

  Code D;
  D = A;  // Assignment operator (default behavior)
  
  cout << "\nid of A: "; A.display();
  cout << "\nid of B: "; B.display();
  cout << "\nid of C: "; C.display();
  cout << "\nid of D: "; D.display();

  return 0;
}
