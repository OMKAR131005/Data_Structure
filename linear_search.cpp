#include <iostream>
using namespace std;//linerar search

int main() {
    int size,index=-1;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array[i];
    }
    int num;
    cout<<"enter number you want seaech"<<endl;
    cin>>num;
    for(int i=0;i<size;i++){
        if(num==array[i]){
            index=1;
            cout<<"number found at index: "<<i<<endl;
            break;
        }
    }
    if(index==-1){
        cout<<"not found"<<endl;
    }
}