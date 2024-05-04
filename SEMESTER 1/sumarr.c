#include<stdio.h>
int main()
{
int n;
int item,i,j,flag=0;
	printf("Enter the number of elements of the array\n");
	scanf("%d",&n);
    int  arr[n];
	printf("Enter a number\n");
	scanf("%d",&item);
	printf("\nEnter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
    // printf("\nEntered array : \n");
	// for(i=0;i<n;i++)
	// {
	// 	printf(" %d",arr[i]);
	// }
	//printf("\n");
    	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if((arr[i]+arr[j])==item){
			flag++;
			printf("(%d,%d), ",arr[i],arr[j]);
		}
     }
 }   
 printf("\nNumber of pairs : %d",flag); 
}