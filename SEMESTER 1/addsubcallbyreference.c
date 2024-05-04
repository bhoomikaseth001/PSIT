#include<stdio.h>
main() {
    int a,b;
    scanf("a=%d\nb=%d",&a,&b);
    add_sub(&a,&b);
    printf("a=%d\nb=%d",a,b);
}