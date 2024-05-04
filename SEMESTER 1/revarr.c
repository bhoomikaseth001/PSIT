#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
int a[n];
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Entered array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
     int first=a[i];
    int second=a[n-i-1];
     a[i]=second;
     a[n-i-1]=first;
    }

     printf("\nReversed array : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}


//APPROACH 2

// #include<stdio.h>
// main()
// {
// 	int n,i;
// 	printf("Enter the number of elements");
// 	scanf("%d",&n);
// 	int a[n],b[n],j=0;
// 	printf("Enter the elements of the array\n");
// 	for(i=0;i<n;i++)
// 	{
// 	scanf("%d",&a[i]);
// 	}
// 	printf("Elements of the array are:\n");
// 	for(i=0;i<n;i++)
// 	{
// 		printf("%d ",a[i]);
// 	}
// 	for(i=n-1;i>=0;i--)
// 	{
// 		b[j]=a[i];
// 		j++;
// 	}
// 	   printf("\nReversed array :\n");
// 	for(i=0;i<n;i++)
// 	{
// 		printf("%d ",b[i]);
// 	}
// }