//WAP in CPP to print the Hour glass

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows in upper triangle";
    cin>>n;
    int s,i,j,k;
    s=0;
    for(i=n;i>=1;i--){
        for(k=1;k<=s;k++)
            cout<<"   ";
        for(j=1;j<=(2*i)-1;j++)
            cout<<" * ";
        s++;
        cout<<"\n";
    }
     s=n-1;
     for(i=2;i<=n;i++){
        for(k=1;k<s;k++)
            cout<<"   ";
        for(j=1;j<=(2*i)-1;j++)
            cout<<" * ";
        s--;
        
        cout<<endl;
    }

}
/* Output:
Enter the number of rows in upper triangle 5
 *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  *    
       *  *  *  *  *       
          *  *  *
             *
          *  *  * 
       *  *  *  *  *
    *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *    */