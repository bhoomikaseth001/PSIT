#include<stdio.h>
int main() {
    int n1,n2,n3,p;
    printf("Enter the number of 100 rupee note");
    scanf(" %d",&n1);
    printf("Enter the number of 10 rupee note");
    scanf(" %d",&n2);
    printf("Enter the number of 1 rupee note");
    scanf(" %d",&n3);
    printf("Enter the price of the item to be purchased");
    scanf(" %d",&p);
    if(n1>=0 && n2>=0 && n3>=0 && p>=0) {
         int money=((n1*100)+(n2*10)+(n3*1));
        if(money>=p)
        printf("1");
        else
        printf("0");
        }
}