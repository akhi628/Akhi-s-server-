
#include <iostream>
using namespace std;

int main() {
    int a[10], val, size, i;  // Increased array size to allow insertion

    // Input size of array and value to insert
    cin >> size >> val;

    // Input the elements of the array
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }

    // Increase the size of the array to accommodate the new element
    size++;

    // Shift elements one position to the right
    for (i = size - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new value at the beginning
    a[0] = val;

    // Output the array with the new element
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
