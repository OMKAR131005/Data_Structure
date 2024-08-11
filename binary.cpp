#include<iostream>
using namespace std;//binary search
int main(){
    int key,mid,start=0,size,i=0,end;
    cout<<"enter the size of array: "<<endl;
cin>>size;
int array[size];
while(i<(size)){
    cout<<"enter the element number: "<<i+1<<endl;
    cin>>array[i];
    i++;
}
cout<<"enter the element to search: "<<endl;
cin>>key;
end=size-1;
while(start<=end){
    mid=(start+end)/2;
    if(key==array[mid]){
        cout<<"element found"<<endl;
        break;
    }
    else if(key>array[mid]){
        start=mid+1;
        
    }
    else{
        end=mid-1;
    
    }
}
if(start>end){
    cout<<"not found "<<endl;
}
}