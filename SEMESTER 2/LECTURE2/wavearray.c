#include<stdio.h>
#include<stdlib.h>
void swap(int arr[],int i,int j){
    int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
}
int main(){
    int n,i,j;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);

    int *arr=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    //sorting elements using bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }

    //printing wave array
    printf("Wave array\n");
    for(i=0;i<n-1;i+=2)
        swap(arr,i,i+1);
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
}


