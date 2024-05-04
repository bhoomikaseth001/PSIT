#include<stdio.h>
int n;
int a[];
int binsearch(int n,int f,int a[])
{
    int found=0,l=0,u=n-1,mid=(l+u)/2;
    if(f==a[mid])
    {
        found++;
       return 1;
    }
     if(f<a[mid])
     u=mid-1;
     else
     l=mid+1;

}
int main()
{
    printf("Enter the number of elements ");
    scanf("%d",&n);
    

}