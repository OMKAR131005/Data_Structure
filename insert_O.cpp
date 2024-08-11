#include<iostream>
using namespace std;


int main() {
    int array[100];
    int n, ind, item;

    cout << "Enter the number of elements you want to enter: ";
    cin >> n;

    for (int j = 0; j < n; ++j) {
        cout << "Enter element number " << j + 1 << ": ";
        cin >> array[j];
    }

    cout << "Enter the positionto insert: ";
    cin >> ind;
    cout << "Enter the value to insert: ";
    cin >> item;

    // Shift elements to make space for the new element
    for (int i = n; i > ind; --i) {
        array[i] = array[i - 1];
    }

    // Insert the new element
    array[ind-1] = item;

    // Print the modified array
    cout << "Modified array:" << endl;
    for (int k = 0; k <= n; ++k) {
        cout << array[k] << endl;
    }

    return 0;
}
