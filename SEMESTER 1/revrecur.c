// #include <stdio.h>
// int Reverse(int n)
// {
//     int rev=0;
//     int rem;
//  if(n<10)
//     return n;
//     else
//  {
//      rem=n%10;
//      rev=rev*10+rem;
//      Reverse(n/10);
//  }
// return rev;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int reverse=Reverse(n);
//     printf("%d",reverse);
    
// }

#include<stdio.h>
#include<math.h>
int Reverse(int n,int c)
{
    if(n<10)
    return n;

    int rem=n%10;
    int rev= rem*pow(10,c-1)+Reverse(n/10,c-1);
    return rev;
}
int main() {
    int n,c=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        temp/=10;
        c++;
    }

    int reverse=Reverse(n,c);
    printf("%d",reverse);
    
}