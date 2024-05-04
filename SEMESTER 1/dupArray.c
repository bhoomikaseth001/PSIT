#include<stdio.h>
int main()
{
    int n,flag=1;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
int a[n];
    printf("\nEnter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Entered array : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nDuplicate elements of the array : ");
    for(int i=0;i<n;i++)
    {
        flag=1;
       for(int j=i+1;j<n;j++)
       {
        if(a[i]==a[j])
        { flag++;
          if(flag>=2)
              printf(" %d",a[i]);
        }
       }
    }
}