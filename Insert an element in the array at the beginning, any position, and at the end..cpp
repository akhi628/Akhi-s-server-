#include<iostream>
using namespace std;

int main() {
    int arr[10], n, pos;

    cout << "Enter size of an array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Case 1: Deleting the first element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "After deleting the first element: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reset the array for further deletion
    cout << "\nEnter size of an array again: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Case 2: Deleting the last element
    n--;

    cout << "After deleting the last element: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reset the array for further deletion
    cout << "\nEnter size of an array again: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Case 3: Deleting an element at a specific position
    cout << "Enter position to delete: ";
    cin >> pos;
    pos--;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "After deleting the element at position " << (pos + 1) << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

