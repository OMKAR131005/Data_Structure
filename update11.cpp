#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; ++i) {
        cout << "Enter element number " << (i + 1) << ": ";
        cin >> array[i];
    }

    int update;
    cout << "Enter the number of elements you want to update: ";
    cin >> update;

    if (update > size) {
        cout << "Invalid update count." << endl;
    } else {
        while (update > 0) {
            cout << "Enter the position you want to update: ";
            int pos;
            cin >> pos;

            if (pos > size) {
                cout << "Invalid position." << endl;
            } else {
                cout << "Enter the new value: ";
                int num;
                cin >> num;
                array[pos - 1] = num; // Corrected line
                update--;
            }
        }
    }

    cout << "Updated array is:" << endl;
    for (int j = 0; j < size; ++j) {
        cout << array[j] << " ";
    }
    cout << endl;

    return 0;
}
