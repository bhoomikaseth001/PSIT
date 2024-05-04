#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nSum of the elements of array is : %d",sum);
}