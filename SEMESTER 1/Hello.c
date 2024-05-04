// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int n;
//     scanf("%d",&n);
//     int a=0,b=1;
//     int c=a+b;
//     printf("%d, %d",a,b);
// if(n>=1 && n<=100)
// {
//     for (int i=2;i<n;i++)
//     {
//     printf("%d, ", c);
//     a=b;
//     b = c;
//     c = a + b;
//     }

// }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
//  {
//    int i=0,n;
//    printf("Enter the number");
//    int A[6];
//    for(int i=0;i<=5;i++)
//    {
//     scanf("%d",&A[i]);
//    }
//    for(int i=0;i<=5;i++)
//    {
//     printf("%d",A[i]);
//    }
//    return 0;
//  }
#include<stdio.h>
int main()
{
unsigned int i = 23;
signed char c = -23;
if (i > c)
printf("Yes");
else
printf("No");
}