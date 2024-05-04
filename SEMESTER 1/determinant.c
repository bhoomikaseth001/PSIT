#include <stdio.h>
#include <math.h>
int det2by2(int arr[2][2]){
    int deter=arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    return deter;
}
int main(){
    int arr[3][3];
    int deter=0;
    printf("Enter Matrix Elements:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("enter element mat[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<3;i++){
        int newarr[2][2];
        int r1=0,c1=0;
        for (int j=0;j<3;j++){
            for (int k=0;k<3;k++){
                if(!(j==0 && k==i)){
                    newarr[r1][c1++]=arr[j][k];
                }
                
            }
            r1++;
        }int sign=1;
        deter+=sign*arr[0][i]*det2by2(newarr);
        sign=-sign;
    }
    printf("The det of matrix is %d",deter);
}