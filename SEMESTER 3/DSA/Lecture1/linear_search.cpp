#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of the array";
cin>>size;
int arr[size];
cout<<"Enter the elements of the array : ";
for(int i=0;i<size;i++)
    cin>>arr[i];
cout<<endl;

cout<<"Enter the element to be searched : ";
int ele;
cin>>ele;

for(int i=0;i<size;i++){
    if(arr[i]==ele)
        cout<<"Element found at position "<<i+1<<endl;
    else
        cout<<"Element not found";
}
return 0;
}


