#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact*=i;
    return fact;
}
int main()
{
float x;
int n,term=1;
float sum=0.0;
    scanf(" %f",&x);
    scanf(" %d",&n);
    if((n>=0 && n<=20)&&(x>=0 && x<=180)) 
    {
        for(int i=1;i<=n;i++)
        {
            sum=sum+(pow(-1,i+1)*pow(x,term))/factorial(term);
            term+=2;
        }
        printf("%f",sum);
    }
}