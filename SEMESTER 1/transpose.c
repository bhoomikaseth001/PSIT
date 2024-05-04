// #include<stdio.h>
// int main() {
//     int m,n,i,j;
//     printf("Enter the number of rows and columns");
//     scanf("%d%d",&m,&n);
//     int arr[m][n],t[10][10];
//     printf("Enter the elements of the array");
//     for(i=0;i<m;i++) {
//         for(j=0;j<n;j++) {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     // printf("\nEntered Matrix\n");
//     // for(i=0;i<m;i++){
//     //     for(j=0;j<n;j++) {
//     //     printf("  %d",arr[i][j]);
//     //      if(j==m-1)
//     // printf("\n");
//     // }
//     // }

//     // for(i=0;i<m;i++){
//     //     for(j=0;j<n;j++) {
//     //         t[i][j]=arr[j][i];
//     //     }
//     // }
//      printf("\nTransposed Matrix\n");
//     for(i=0;i<m;i++) {
//         for(j=0;j<n;j++){ 
//      t[i][j]=arr[j][i];
//         printf("  %d",t[i][j]);
//          if(j==n-1)
//     printf("\n");
//         }
//     }
// }


#include <stdio.h>
void Transpose(int mat[10][10], int r, int c) {
    int trans[10][10];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[10][10];
    int m, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Entered matrix: \n");
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
     }
    Transpose(mat, m, n);
}
