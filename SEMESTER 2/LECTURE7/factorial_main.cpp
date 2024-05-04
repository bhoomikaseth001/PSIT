//main.cpp
#include<iostream>
#include "factorial_.h"

using namespace std;
using namespace Factorial;

int main(){
    int fact;
    cout<<"Enter a number";
    cin>>fact;
    cout<<"The factorial of "<<fact<<" is : "<<factorial(fact);
    return 0;
    }
