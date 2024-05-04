// // #include<stdio.h>
// // #include<stdlib.h>
// // int main(){
// //     int n,i,j;
// //     printf("Enter the size of the array");
// //     scanf("%d",&n);
// //     int arr[n];
// //     printf("Enter the elements");
// //     for(i=0;i<n;i++)
// //         scanf("%d",&arr[i]);

// //     for(i=0;i<n;i++)
// //         printf("%d ",arr[i]);
// //     printf("\nAfter reversing the array\n");
// //     for(i=n-1;i>=0;i--)
// //         printf("%d ",arr[i]);

// //     printf("\nDuplicate elements : ");
// //     for(i=0;i<n;i++){
// //         for(j=i+1;j<n;j++){
// //             if(arr[i]==arr[j])
// //                 printf("%d",arr[i]);
// //         }
// //     }
// //     printf("\nArray after deleting the duplicate element\n");
// //     for(i=0;i<n;i++){
// //         for(j=i+1;j<n;j++)
// //             if(arr[i]!=arr[j])
// //                 printf("%d",arr[i]);
// //         break;

// //            // printf("%d",arr[i]);

// //     }
// // }

// #include<stdio.h>
// int main(){
//     int r1,c1,i,j;
//     printf("Enter the size of the square matrix : ");
//     scanf("%d",&r1);
//     int arr1[r1][r1];
//     for(i=0;i<r1;i++){
//         for(j=0;j<r1;j++)
//             scanf("%d",&arr1[i][j]);
//        }

//      int arr2[r1][r1];
//     for(i=0;i<r1;i++){
//         for(j=0;j<r1;j++)
//             scanf("%d",&arr2[i][j]);
//        }

//     int add[r1][r1];
//     for(i=0;i< r1;i++){
//         for(j=0;j<r1;j++)
//             add[i][j]=arr1[i][j]+arr2[i][j];
//      }
//      for(i=0;i< r1;i++){
//         for(j=0;j<r1;j++)
//             printf("%d",add[i][j]);
//         printf("\n");
//      }

//     }

// #include<stdio.h>
// main()
// {
// int a[3][3],b[3][3],c[3][3];
// int i,j;
// printf("enter the elements in both the array:");
// for(i=0 ; i<3 ; i++)
// {
// for(j=0 ; j<3 ; j++)
// {
// scanf("%d",&a[i][j]);
// }
// }
// for(i=0 ; i<3 ; i++)
// {
// for(j=0 ; j<3 ; j++)
// {
// scanf("%d",&b[i][j]);
// }
// }

// for(i=0 ; i<3 ; i++)
// {
// for(j=0 ; j<3 ; j++)
// {
// c[i][j]=a[i][j]+b[i][j];
// printf("%d",c[i][j]);
// }
// printf("\n");
// }
// }

// #include <stdio.h>
// void main()
// {
//     int mat[12][12], transpose[12][12];
//     int i, j, row, col, flag = 1;
// printf("Enter the number of rows and columns for 1st matrix\n");
// scanf("%d%d",&row,&col);
// printf("Enter the elements of the matrix\n");
// for(i=0;i<row;i++)
// {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
// }

// printf("The matrix\n");
// for(i=0;i<row;i++)
// {
//         for (j = 0; j < col; j++)
//         {
//             printf("%d\t", mat[i][j]);
//         }
//         printf("\n");
// }
// //To find transpose
// for(i=0;i<row;i++)
// {
//         for (j = 0; j < col; j++)
//         {
//             transpose[j][i] = mat[i][j];
//         }
// }

// printf("The transpose matrix\n");
// for(i=0;i<col;i++)
// {
//         for (j = 0; j < row; j++)
//         {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
// }
// if(row==col)
// {
//         for (i = 0; i < row; i++)
//         {
//             for (j = 0; j < col; j++)
//             {
//                 if (mat[i][j] != transpose[i][j])
//                     flag =0;
//                     break;
//             }
//         }
//             if(flag==0)
//                     printf("\nThe matrix is not symmetric");
//                 else
//                     printf("\nThe matrix is symmetric");
//             }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++)
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }

//      for(int i=0;i<n;i++)
//         printf("%d",arr[i]);
//     }

// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++)
//            printf("%d",arr[i]);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//         for(int i=0;i<n-1;i++){

//             int min_index=i;
//             for(int j=i+1;j<0;j++){
//                 if(arr[j]<arr[min_index])
//                     min_index=j;
//             }
//             if(min_index != i)
//                 swap(&arr[min_index],&arr[i]);
//         }
//         print(arr,n);
// }

// #include<stdio.h>
// int main(){
//     char str[100];
//     int freq[256]={0};
//     gets(str);
//     int i,max,value;
//     for(i=0;str[i] != '\0';i++){
//         value=(int)str[i];
//         freq[value]++;
//     }
//     max=0;
//     for(i=0;i<256;i++){
//        if(freq[i]>freq[max])
//        max=i;
//     }
//     printf("\nMaximum occurence character is '%c' = %d times",max,freq[max]);
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char str[100],rev[100];
// int i,n;
// printf("Enter string:\n");
// gets(str);
// strcpy(rev,str);
// strrev(rev);
// if(strcmp(str,rev)==0)
// printf("Palin");
// else
// printf("NOt");
// }

// #include <stdio.h>
// struct student{
//     int stuno;
// };
// int main(){
//     struct student stu1;
//     struct student *pstu;
//     pstu=&stu1;
//     stu1.stuno=10;
//     printf("%d\n",stu1.stuno);
//     printf("%d",pstu->stuno);
// }

// #include<stdio.h>
// int main() {
// char s1[100], s2[100];
// int i;
// printf("\nEnter two strings :");
// gets(s1);
// gets(s2);
// i = 0;
// // while s1 is equal to s2 
// while (s1[i] == s2[i] && s1[i] != '\0')
// i++;
// if (s1[i] > s2[i])
// printf("Strings are not equal");
// else if (s1[i] < s2[i])
// printf("Strings are not equal");
// else
// printf("Strings are equal");
// }


// #include <stdio.h>
// int main(){
//   int d,s;
//   scanf("%d %d",&d,&s);
//   int mat[d][d],smat[d][d];
//   for (int i=0;i<d;i++){
//     for (int j=0;j<d;j++){
//       scanf("%d",&mat[i][j]);
//     }
//   }
//   for (int i=0;i<d;i++){
//     for (int j=0;j<d;j++){
//       int sum=0;
//       int cbb=j-s,cbh=j+s,rbb=i-s,rbh=i+s;
//       if (i-s<0){
//         rbb=0;
//       }
//       if (i+s>=d){
//         rbh=d-1;
//       }
//       if (j-s<0){
//         cbb=0;
//       }
//       if (j+s>=d){
//         cbh=d-1;
//       }
//       for (int k=rbb;k<=rbh;k++){
//         for (int l=cbb;l<=cbh;l++){
//           sum+=mat[k][l];
//         }
//       }
//       smat[i][j]=sum;
//     }
//   }
//   for (int i=0;i<d;i++){
//     	for (int j=0;j<d;j++){
//       		printf("%d",smat[i][j]);
//             if (!(i==d-1 && j==d-1))
//             printf(" ");
//     	}
//         if(i!=d-1){
//         printf("\n");
//         }
//   	}
// }

// #include<stdio.h>
// int main(){
//   FILE *fptr;
//   fptr=fopen("E:\\Scholarships.txt","w");
//   printf(fptr, "Reading data from a file is a common feature of file handling.\n"); 
//   fclose(fptr);
// //   fptr=fopen("E:\\Scholarships.txt","r");
// // int a=getw(fptr);
// //   printf("%d",a);
// //   fclose(fptr);
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//   FILE* fptr;
//   int i=0,j,count=0;
//   char filename[100],newchar[100],ch;
//   printf("Enter the filename to open for reading \n");
// scanf("%s", filename);
//   fptr=fopen(filename,"r");
//   if(fptr==NULL){
//     printf("Cannot open file : ");
//     exit(0);
//   }
//   printf("The original content is : \n\n");
//   ch=getc(fptr);
//   while(ch!=EOF)
//   {
//     count++;
//     putchar(ch);
//     newchar[i]=ch;
//     i++;
//     ch=getc(fptr);
//   }
//   printf("\n\n");
//   printf("The content in reverse order is : \n\n");
//   for(j=(count-1);j>=0;j--)
//   {
//     ch=newchar[j];
//     printf("%c",ch);
//   }
//   printf("\n");
// }

// #include <stdio.h>
// #include <string.h>
// struct data {
//  int i;
//  float f;
//  char str[20];
// };
// int main( ) 
// { struct data dt; 
//  dt.i = 10;
//  dt.f = 220.5;
//  printf( "dt.i : %d\n", dt.i);
//  printf( "dt.f : %f\n", dt.f);
// }

// #include <stdio.h>
// #include <string.h>
// struct data {
//  int i;
//  float f;
//  char str[20];
// };
// int main( ) {
//  struct data dt; 
//  dt.i = 10;
//  dt.f = 220.5;
//  strcpy( dt.str, "C Programming");
//  printf( "dt.i : %d\n", dt.i);
//  printf( "dt.f : %f\n", dt.f);
// printf( "dt.str : %s\n", dt.str);
// }

#include<stdio.h>
int main(){
    int bit =1,c1=0,c2=0,flag=0;
    while(bit != -1){
        scanf("%d",&bit);
        if(bit==1){
            flag=1;
            c2+=c1;
            c1=0;
        }
        else if(bit==0 && flag==1)
        c1++;
    }
    printf("%d",c2);
}

