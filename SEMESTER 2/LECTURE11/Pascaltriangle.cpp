//WAP in CPP to print the pascal's triangle
#include<iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int Pascaltriangle(int i,int j){
    int value;
             value = factorial(i)/(factorial(j)*factorial(i-j));
    
    return value;
}
int main(){
    int n,i,j;
    cout<<"Enter the number of rows";
    cin>>n;
    // int s=n-1;
    // for(int i=0;i<n;i++){
    //     for(int k=1;k<=s;k++){
    //         cout<<" ";
    //         s--;}
    //     for(int j=0;j<=i;j++){
    //         int v=Pascaltriangle(i,j);
    //         cout<<v<<" ";
        
    //     }
        int s=n-1,val;
    for(int i=0;i<n;i++)
    {
        for(int k=1;k<=s;k++)
        cout<<" ";
         s--;
        for(int j=0;j<=i;j++)
        {val=factorial(i)/(factorial(j)*factorial(i-j));
        cout<<" "<<val<<" ";}
       
        cout<<endl;
    }
    
}