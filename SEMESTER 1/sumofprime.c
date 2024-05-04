#include<stdio.h>
int isPrime(int);
int main()
{
	int i,n,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++)
{
	if(isPrime(i)&&isPrime(n-i))
    {
	c++;
    printf("%d = %d + %d\n",n,i,(n-i));
    }
}
if(c==0)
printf("Not possible");
else
return 0;
}
int isPrime(int num)
{
	int i,c=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}
			if(c==2)
		    return 1;
		    else
		    return 0;
		
}