#include<stdio.h>
#include<stdlib.h>
// void swap(int* a, int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main() {
    int n,i,j;
    printf("Enter the number of rows and columns of a square matrix");
    scanf("%d",&n);
    int **arr,temp;

    //Dynamic allocation
    arr = (int **)malloc(sizeof(int*)*n);
    for (i=0;i<n;i++)
        arr[i]=(int*)malloc(sizeof(int)*n);

    printf("Enter the elements of the matrix");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) 
            // scanf("%d",& *(arr+i)+j);
            scanf("%d",& arr[i][j]);
    }
    //Dynamic allocation
    int **array;
    array = (int **)malloc(sizeof(int*)*n);
    for ( i=0;i<n;i++)
        *(array+i)=(int*)malloc(sizeof(int)*n);
    //Transpose of the matrix
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            array[j][i]=arr[i][j];
    }

    //reversing the matrix row wise
    // for(i=0;i<n;i++){
    // int start =0,end=n-1;
    //     while(start<end){
    //     swap(&array[i][start],&array[i][end]);
    //     start++;
    //     end--;
    //     }
    // }
    for (int i=0;i<n;i++){
        for (int j=0;j<n/2;j++){
            int temp=array[i][j];
            array[i][j]=array[i][n-1-j];
            array[i][n-1-j]=temp;
        }
    }

    //printing the rotated matrix
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) 
            printf("%d  ",array[i][j]);
            printf("\n");
        
    }
}