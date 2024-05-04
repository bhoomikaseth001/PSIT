#include<stdio.h>
#include<stdlib.h>
void reverse(int arr[], int start, int end){
    if(start<end){//Swap
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       reverse(arr, ++start, --end);//Recursive
    }   
}
int main(){
    int n,i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",arr+i);

   
reverse(arr,0,n-1);
     printf("\nReversed array : ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}