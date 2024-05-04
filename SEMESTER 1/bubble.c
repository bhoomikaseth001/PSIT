#include<stdio.h>
int main()
{
int n;
int i,j,temp;
	printf("Enter the number of elements of the array");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	
    printf("\nElements before sorting :");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
	   	     {
		       temp=arr[j];
		       arr[j]=arr[j+1];
		       arr[j+1]=temp;
		     }
		}
	}
	printf("\nElements after sorting :");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
}
	
	