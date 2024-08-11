#include<iostream>//bubble sort
using namespace std;
int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"enter element number"<<i+1<<endl;
        cin>>array[i];
    }
    for(int i=size-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    cout<<"sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

}