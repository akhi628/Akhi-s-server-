#include <iostream>
using namespace std;

class person {
public:
    int id = 1304;
    float cg = 3.80;

    void display() {
        cout << "ID: " << id << " CG: " << cg << endl;
    }
};

class student : public person {
public:
    char name[50]; // Declare an array to store the name

    void display1() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    student Akhi;
    // Initializing name
    cout << "Enter the student's name: ";
    cin.getline(Akhi.name, 50);

    Akhi.display();
    Akhi.display1(); 

    return 0;
}
