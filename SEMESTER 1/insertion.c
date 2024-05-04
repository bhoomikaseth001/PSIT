#include<stdio.h>
int main()
{
int n,i,j;
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

    for(i=1;i<n;i++) {
        int key=arr[i];
		//move elements of arr[0.....i-1], 
		//that are greater than key,
		//to one position ahead of their current position
		for(j=i-1; j>=0 && arr[j]>key; j--) {
			arr[j+1]=arr[j];
		}
	arr[j+1]=key;
	}
	printf("\nElements after sorting :");
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
 }