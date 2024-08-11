#include<iostream>//selection sort
using namespace std;
int main(){
    int i=0,j=i+1;
    int size;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int array[size];
    while(i<size){
        cout<<"enter element number"<<i+1<<endl;
        cin>>array[i];
        i++;
    }
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }

        }
    }
    cout<<"sorted array is:";
    for(i=0;i<size;i++){
        cout<<array[i]<<"  ";
    }


}