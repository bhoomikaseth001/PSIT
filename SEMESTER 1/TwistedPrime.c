/*Program to check whether a number is Twisted Prime or not*/
#include<stdio.h>
int main()
{
	int n,c=0,c1=0,rem,rev=0;
	printf("Enter a number");
	scanf("%d",&n);
	int temp=n;
	
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	{
		while(n>0)
		{
			rem=rem%10;
			rev=rev*10+rem;
			n=n/10;
		}
		
		for(int i=1;i<=rev;i++)
	   {
		if(rev%i==0)
		c1++;
	   }
      if(c==2)
	  printf("%d is a Twisted Prime Number",temp);
	  else
	  printf("%d is not a Twisted Prime Number",temp);
    }
    else
    printf("%d is not a Prime number ",temp);
    return 0;
}