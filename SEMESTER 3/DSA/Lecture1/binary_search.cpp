#include<iostream>
using namespace std;
int binary_search(int *arr, int size,int ele){
    int low=0,high=size-1;
    int mid=low+(high-low)/2;

    while(low<=high){
        if(arr[mid]==ele)
            return mid;
        else if(arr[mid]>ele)
            low=mid+1;
        else if(arr[mid]<ele)
            high=mid-1;
    }
    return -1;
}
int main(){
int size;
cout<<"Enter the size of the array : ";
cin>>size;
int arr[size];
cout<<"\nEnter the elements of the array in sorted form : ";
for(int i=0;i<size;i++)
    cin>>arr[i];
cout<<endl;

cout<<"Enter the element to be searched : ";
int ele;
cin>>ele;
int result=binary_search(arr,size,ele);
    if(result == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at position "<<result+1<<endl;
return 0;
}


