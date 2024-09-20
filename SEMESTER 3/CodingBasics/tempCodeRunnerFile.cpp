#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[]={2,5,67,3,-23,546,0};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int ind_larg,ind_smal;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        largest=max(arr[i],largest);
        ind_larg=i;
        smallest=min(arr[i],smallest);
        ind_smal=i;}
        cout<<"Largest value in the array is : "<<largest<<" at position "<<ind_larg<<endl;
        cout<<"Smallest value in the array is : "<<smallest<<" at position "<<ind_smal<<endl;

}