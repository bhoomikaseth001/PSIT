//WAP in CPP to print the rotation of an array by k-times using function template
#include<iostream>
using namespace std;
template <typename BS>
void rotate(int n,int k,BS *arr){
    for(int i=1;i<=k;i++) {
        BS temp=arr[n-1];
        for(int j=n-2;j>=0;j--)
        arr[j+1]=arr[j];
        arr[0]=temp;
    }
}
int main() {
    int n,i,j,k,temp;
 
   cout<<"Enter the number of elements";
   cin>>n;
   int arr[n];
    cout<<"Enter the number of steps";
    cin>>k;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        rotate(n,k,arr);
 for(int i=0;i<n;i++)
 cout<<arr[i];
}
/*
Output:
Enter the number of elements 6
Enter the number of steps 3
Enter the elements 1 2 3 4 5 6
456123
*/