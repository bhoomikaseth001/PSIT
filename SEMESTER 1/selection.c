#include<stdio.h>
int main()
{
    int n,min_index;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("\nEntered array");
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
    for(int i=0;i<n-1;i++) {
        
        min_index=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        if(i !=min_index) {
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
    }
    printf("\nSorted array");
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
}


// #include<stdio.h>
// int main()
// {
//     int n,min,index;
//     printf("Enter the number of elements of the array");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array");
//     for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);

//     printf("\nEntered array");
//     for(int i=0;i<n;i++)
//     printf(" %d",arr[i]);

//     for(int i=0;i<n;i++) {
//         min=arr[i];
//         index=i;
//         for(int j=i+1;j<n;j++) {
//             if(arr[j]<arr[i])
//             {
//                 index=j;
//             }
//         }
//         if(i !=index) {
//             int temp=arr[index];
//             arr[index]=arr[i];
//             arr[i]=temp;
//         }
//     }
//     printf("\nSorted array");
//     for(int i=0;i<n;i++)
//     printf(" %d",arr[i]);
// }