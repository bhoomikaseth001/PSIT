#include<stdio.h>
int main() {
    int r1,c1,r2,c2,i,j,k,sum=0;
    printf("Enter the number of rows and columns of first matrix");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    printf("Enter the elements of the first matrix");
    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("Enter the number of rows and columns of second matrix");
    scanf("%d %d",&r2,&c2);
    int mat[r1][c2],arr2[r2][c2];
    if(c1!=r2)
    printf("Multiplication cannot be performed");
    else {
         printf("Enter the elements of the second matrix");
        for(i=0;i<r2;i++) {
            for(j=0;j<c2;j++)
                scanf("%d",&arr2[i][j]);
        }
        for(int i=0;i<r1;i++){
            for(j=0;j<c2;j++) {
                for(k=0;k<r2;k++)
                    sum+=arr1[i][k]*arr2[k][j];
                mat[i][j] = sum;
                sum=0;
            }
        }
        printf("\nMultiplication of the entered Matrix\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
                printf("%d  ",mat[i][j]);
        printf("\n");
        }
    }
}