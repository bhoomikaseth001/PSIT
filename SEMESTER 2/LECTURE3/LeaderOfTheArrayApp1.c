//Complexity of order n^2
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Enter the size of the array");
    int n,i,j;
    scanf("%d",&n);
    int *arr1=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);

     printf(" \n Leader elements \n");
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr1[i]<=arr1[j])
            break;
    }
        if(j==n)
           printf("%d  ",arr1[i]);
}

     free(arr1); 
}





