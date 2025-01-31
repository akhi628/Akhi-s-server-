#include <iostream>
using namespace std;
class person {
int id ;
float cg ;

public :

person ( int x, float y) {
    id = x;
    cg = y;

}

void display () {
    cout << id << " " << cg << endl;
}
};

int main ( ) {
person p( 1304 , 3.80) ;
p. display ();
return 0 ;

}