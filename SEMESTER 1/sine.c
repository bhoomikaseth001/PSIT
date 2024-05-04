#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fac(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f*=i;
    }
    return f;
}
int main() {

    int N;
    scanf("%d",&N);
    int k=N;
    for(int n=1;n<=N;n++)
    {
        
        for(int i=k;i>1;i--)
        {
            printf(" ");

        }
        k--;
        for(int r=1;r<=n;r++)
        {
            int term=fac(n-1)/(fac(r-1)*fac((n-1)-(r-1)));
            printf("%d ",term);
        }
        printf("\n");
        
    }
}