#include<stdio.h>
int main()
{
int n;
int arr[n],i;
	printf("Enter the number of elements of the array");
	scanf("%d",&n);
	printf("\nEnter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	
    printf("\nEntered elements of the array are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}

	int t=0;
	for(i=0;i<n/2;i++)
	{
		if(arr[i] != arr[n-i-1])
		{
		t++;
		break;
		}
	}
	if(t==1)
	printf("\nNot a Palindrome Array");
	else
	printf("\nPalindrome Array");
}