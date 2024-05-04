//WAP in CPP to print hollow rectangle
#include<iostream>
using namespace std;
int main(){
    int l,b,i,j;
    cout<<"Enter the number of length of a rectangle";
    cin>>l;
    cout<<"Enter the number of breadth of a rectangle";
    cin>>b;
    for(i=1;i<=b;i++){
        for(j=1;j<=l;j++){
            if(i==1||j==1||i==b||j==l)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    }
