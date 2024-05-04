#include<stdio.h>
int isDiv(int n)
{
    int temp=n;
    int rem,c=0;
while(n>0)
{
    rem=n%10;
    if(temp%rem==0)
    {
        c++;
    }
    n=n/10;
}
if(c>=2)
return 1;
else
return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=10 && n<=100000)
    {
        if(isDiv(n))
        printf("YES");
        else
        printf("NO");
    }
}