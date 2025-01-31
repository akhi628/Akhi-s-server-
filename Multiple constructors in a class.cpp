#include <iostream>
using namespace std;
class integer {
    int m,n;
    public:
        integer(){
         m=0;
         n=0;
          cout << "Default constructor called. m = " << m << ", n = " << n << endl;
        }

        integer (int a, int b) {
        m=a;
        n=b;
          cout << "Parameterized constructor called. m = " << m << ", n = " << n << endl;
        }

        integer (const integer &i) {
        m=i.m; 
        n=i.n;
          cout << "Copy constructor called. m = " << m << ", n = " << n << endl;
        }
};
    int main (){

integer I1;
integer I2(20, 40);
integer I3(I2);

return 0;
    }