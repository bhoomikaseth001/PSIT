#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
return f;
}
int main()
{ 
    int n;
printf("Enter the number of rows");
scanf("%d",&n);
int s=n-1,val;
    for(int i=0;i<n;i++)
    {
        for(int k=1;k<=s;k++)
        printf(" ");
         s--;
        for(int j=0;j<=i;j++)
        {val=fact(i)/(fact(j)*fact(i-j));
        printf("%d ",val);}
       
    printf("\n");
    }
}