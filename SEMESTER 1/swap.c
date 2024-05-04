#include<stdio.h>
int swap(int*,int*);
main()
{
    int a=10,b=20;
    printf("Before swap , values are :%d and %d\n",a,b);
    swap(&a,&b);
    printf("After swap, values are : %d and %d\n",a,b);
}
swap(int* p,int* q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("In swap functon, values are : %d and %d\n",*p,*q);
}