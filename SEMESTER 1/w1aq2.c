#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>=b && b>=c)||(a<=b &&b<=c))
        printf("%d",b);
    else if((a>=b && a>=c)||(a<=b && a<=c))
        printf("%d",c);
    else
        printf("%d",a);
    }

// #include<stdio.h>
// int main() {
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     if(a>b) {
//         if(b>c)
//         printf("%d",b);
//         else if(a>c)
//         printf("%d",c);
//         else 
//         printf("%d",a);

//     }
//     else {
//         if(b<c)
//         printf("%d",b);
//         else if(a<c)
//         printf("%d",c);
//         else
//         printf("%d",a);
//     }

// }

