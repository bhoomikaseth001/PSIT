//WAP in CPP to print the butterfly

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of width of triangle";
    cin>>n;
    int s,i,j,k;
    s=2;
    for(i=1;i<=n;i++){
        // for(k=1;k<=s;k++)
        //     cout<<" ";
        if(i<=(n/2)+1){
        for(j=1;j<=i;j++)
            cout<<" * ";
        }
        else{
            for(j=1;j<=i-s;j++)
                cout<<" * ";
            s+=2;
        }
        
        cout<<"\n";
    }
     s=n-1;
     for(i=2;i<=n;i++){
        for(k=1;k<s;k++)
            cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
            cout<<"*";
        s--;
     
        cout<<endl;
     
            
    }

}