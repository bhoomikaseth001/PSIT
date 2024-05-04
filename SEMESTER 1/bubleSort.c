#include<stdio.h>
int main() {
    int n,i,j,flag=0;
    printf("Enter the number of elements of array");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("\nArray before sorting");
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);

    for(i=0;i<n;i++) {
        for(j=n-i;j>=0;j--) {
            if(arr[j]>arr[j+1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
            else
            flag++;
        }
        
    }
    if(flag==n-1)
    printf("Array is already sorted");
    printf("\nArray after sorting");
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
}