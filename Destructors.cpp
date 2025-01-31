#include <iostream>
using namespace std;

int count = 0;// Global variable to count the number of objects created


class test {
    public:
    // Constructor

    test() { 
        count++; // Increment the object count
        cout << "\n\nConstructor Msg: object number " << count << " created ..";
    }
   // Destructor

    ~test() {
        cout << "\n\nDestructor Msg: object number " << count << " destroyed ..";
        count--;  // Decrement the object count
    }
};

int main() {
    cout << "Inside the main block ..";
    cout << "\n\nCreating first object T1 ..";
        

    test T1;  // Creating the first object T1

    { // Block 1
        cout << "\n\nInside Block 1 ..";
        cout << "\n\nCreating two more objects T2 and T3 ..";

        test T2, T3;  // Creating two more objects T2 and T3
        cout << "\n\nLeaving Block 1..";

    }  // T2 and T3 go out of scope here, and their destructors are called

    cout << "\n\nBack inside the main block.. ";
    
    return 0;  // T1 goes out of scope here, and its destructor is called
}
