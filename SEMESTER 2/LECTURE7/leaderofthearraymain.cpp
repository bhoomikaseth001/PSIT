#include<iostream>
#include"leaderofthearray.h"

using namespace std;
using namespace LeaderOfTheArray;

int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    int *arr= new int [size];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];

        Leader(arr,size);
        delete[] arr;
}
