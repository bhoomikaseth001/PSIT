#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,j;
    printf("Enter the number of rows and columns of a square matrix");
    scanf("%d",&n);
    int **arr,temp;
    arr = (int **)malloc(sizeof(int*)*n);
     for (i=0;i<n;i++)
         arr[i]=(int*)malloc(sizeof(int)*n);
    printf("Enter the elements of the matrix");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) 
            scanf("%d",&arr[i][j]);
    }

    for(i=0;i<n/2;i++) {
        for(j=i;j<n-i-1;j++) {
            temp = arr[i][j];
         arr[i][j] = arr[n-1-j][i];
         arr[n-1-j][i] = arr[n-1-i][n-1-j];
      arr[n-1-i][n-1-j] = arr[j][n-1-i];
        arr[j][n-1-i] = temp;
        }
    }
    //printing the rotated matrix
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) 
            printf("%d  ",arr[i][j]);
            printf("\n");

    }   
}
  
//  #include <stdio.h>
//#include <stdlib.h>
// void cycle(int ** arr,int i, int j, int n){
//     n=n-1;
//     int temp=*(*(arr+i)+j);
//     *(*(arr+i)+j)=*(*(arr+n-j)+i);
//     *(*(arr+n-j)+i)=*(*(arr+n-i)+n-j);
//     *(*(arr+n-i)+n-j)=*(*(arr+n-(n-j))+n-i);
//     *(*(arr+n-(n-j))+n-i)=temp;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int **arr= (int**)malloc(sizeof(int*)*n);
//     for (int i=0;i<n;i++){
//         *(arr+i)=(int*)malloc(sizeof(int)*n);
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             scanf("%d",*(arr+i)+j);
//         }
//     }
//     for (int i=0;i<=n-1;i++){
//         for (int j=i;j<=n-i-2;j++){
//             cycle(arr,i,j,n);
//         }
//     }
    
//      printf("Matrix Rotated 90 degree clockwise:\n");
//      for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             printf("     %d ",*(*(arr+i)+j));
//         }
//         printf("\n");
//     }
//     // for(int i=0;i<n;i++) {
//     //     for(int j=0;j<n;j++) 
//     //         printf("     %d",arr[i][j]);
//     //         printf("\n");
//     // }

// for (int i=0;i<=n-1;i++){
//         for (int j=i;j<=n-i-2;j++){
//             cycle(arr,i,j,n);
//         }
//     }
//     printf("Matrix Rotated 180 degree clockwise:\n");
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             printf("     %d ",*(*(arr+i)+j));
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// void swap(int* a, int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int n,i,j;
//     printf("Enter the number of rows and columns of a square matrix");
//     scanf("%d",&n);
//     int **arr,temp;

//     //Dynamic allocation
//     arr = (int **)malloc(sizeof(int*)*n);
//     for (i=0;i<n;i++)
//         arr[i]=(int*)malloc(sizeof(int)*n);

//     printf("Enter the elements of the matrix");
//     for(i=0;i<n;i++) {
//         for(j=0;j<n;j++) 
//             // scanf("%d",& *(arr+i)+j);
//             scanf("%d",& arr[i][j]);
//     }
//     //Dynamic allocation
//     int **array;
//     array = (int **)malloc(sizeof(int*)*n);
//     for ( i=0;i<n;i++)
//         *(array+i)=(int*)malloc(sizeof(int)*n);
//     //Transpose of the matrix
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//             array[j][i]=arr[i][j];
//     }
//     for(i=0;i<n;i++) {
//         for(j=0;j<n;j++) 
//             printf("%d  ",array[i][j]);
//             printf("\n");
        
//     }
//     //reversing the matrix row wise
//     for(i=0;i<n;i++){
//     int start =0,end=n-1;
//         while(start<end){
//         swap(&array[i][start],&array[i][end]);
//         start++;
//         end--;
//         }
//     }
//     //printing the rotated matrix
//     for(i=0;i<n;i++) {
//         for(j=0;j<n;j++) 
//             printf("%d  ",array[i][j]);
//             printf("\n");
        
//     }
// }
