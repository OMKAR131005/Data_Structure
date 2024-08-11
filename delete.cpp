#include<iostream>
using namespace std;
int main(){
    int array[100];int i=0;int size;int index;
    cout<<"enter size of array"<<endl;
    cin>>size;
    while(i<size){
        cout<<"enter the element number"<<i+1<<" :";
        cin>>array[i];
        i++;
    }
    cout<<"enter index of array to delete: ";
    cin>>index;
    for(i=index;i<size-1;i++){
        array[i-1]=array[i];
    }
    for(i=0;i<size-1;i++){
        cout<<array[i]<<endl;
    }
    }