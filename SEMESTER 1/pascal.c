#include<stdio.h>
#include<math.h>
int main()
{
    int n,val;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=s;k++)
        printf(" ");
        s--;
        val=(int)pow(11,i);
        printf("%d",val);
    printf("\n");
    }
}