#include<iostream>
#include"sum.h"

using namespace std;
using namespace Sum;

int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a;
    cin>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is : "<<sum(a,b);
}