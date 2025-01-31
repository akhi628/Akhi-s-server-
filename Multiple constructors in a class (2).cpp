#include <iostream>
using namespace std;
class integer {
    int m,n;
    public:
    // Default constructor
        integer(){
         m=0;
         n=0;
          cout << "Default constructor called. m = " << m << ", n = " << n << endl;
        }
    // Parameterized constructor
        integer (int a, int b) {
        m=a;
        n=b;
          cout << "Parameterized constructor called. m = " << m << ", n = " << n << endl;
        }
    // Copy constructor
        integer (const integer &i) {
        m=i.m; 
        n=i.n;
          cout << "Copy constructor called. m = " << m << ", n = " << n << endl;
        }
};
    int main (){

integer I1;  // Calls default constructor
integer I2(20, 40);  // Calls parameterized constructor
integer I3(I2);   // Calls copy constructor
return 0;
    }