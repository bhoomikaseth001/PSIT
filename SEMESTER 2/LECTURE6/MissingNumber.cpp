//WAP in CPP to find the missing the number in 1st 10 natural numbers

#include<iostream>
using namespace std;
int main(){
     int size,sum1=0,sum2=0,missing;
     cout<<"Enter the size\n";
     cin>>size;
     int arr[size];

     cout<<"Enter the elements\n";
     for(int i=0;i<size;i++)
        cin>>arr[i];

    int n=arr[size-1];
    for(int i=0;i<size;i++)
        sum1+=arr[i];

    for(int i=1;i<=n;i++)
        sum2+=i;

    missing=sum2-sum1;

    cout<<"Missing element = "<<missing;
}