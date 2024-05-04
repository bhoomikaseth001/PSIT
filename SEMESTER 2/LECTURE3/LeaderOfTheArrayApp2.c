//Complexity of order n
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("\nEnter the size of array\n");
    int n,i;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int *sk=(int *)malloc(n*sizeof(int));
    int top=-1;
    sk[++top]=arr[n-1];
    for(i=n-2;i>=0;i--){
        if(arr[i]>=sk[top])
            sk[++top]=arr[i];
    }

printf("\nLeader of the array\n");
    while(top!=-1){
        printf("%d  ",sk[top]);
            top--;
    }
    free(arr);
    free(sk);
}