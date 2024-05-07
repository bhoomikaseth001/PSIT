//  WAP in CPP to find frequency of each element in the given array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int freq[n]={0},visited=-1,count;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){ 