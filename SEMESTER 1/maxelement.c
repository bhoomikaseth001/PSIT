#include<stdio.h>
int main()
{
	int n,i,max=-1;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	max=a[i];
    }
    printf("\nMaximum number of the array : %d",max);
}