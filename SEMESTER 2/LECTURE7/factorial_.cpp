//factorial_.cpp
#include "factorial_.h"
#include<iostream>
using namespace std;
namespace Factorial{
int factorial(int n)
    {
         if(n==0||n==1)
        return 1;
        else
        return n*factorial(n-1);
    }
 }
