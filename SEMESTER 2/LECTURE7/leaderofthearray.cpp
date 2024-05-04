#include<iostream>
#include"leaderofthearray.h"

using namespace std;
namespace LeaderOfTheArray{
    void Leader(int arr[], int size){
        int *sk=new int[size];
    int top=-1;
    sk[++top]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        if(arr[i]>=sk[top])
            sk[++top]=arr[i];
    }

cout<<"Leader of the array"<<endl;
    while(top!=-1){
       cout<<sk[top]<<"  ";
            top--;
    }
  }
}