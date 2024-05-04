// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             if(i==0 || j==0 || i==n-1 || j==n-1)
//             printf("%d",n);
//             else if(i==1 || j==1 || i==n-2 || j==n-2)
//             printf("%d",n-1);
//             else if(i==2 || j==2 || i==n-3 || j==n-3)
//             printf("%d",n-2);
//             else if(i==3 || j==3 || i==n-4 || j==n-4)
//             printf("%d",n-3);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
   for(j=n;j>=1;j--)
     {
	  printf("%d ",j);`
     }
    for(k=i-1;k>=1;k--)	
	printf("%d ",k);
		printf("\n");
   } 
	return 0;
}