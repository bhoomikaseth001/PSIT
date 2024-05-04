/*Fnd out the third smallest element in the given array(Duplicate elements are present)*/
#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
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
		       int temp=arr[j];
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
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1]) 
        count++;
        if(count==3) {
        printf("\n%d",arr[i]);
        break;
        }
    }
	
}
	