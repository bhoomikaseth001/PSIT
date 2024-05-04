// //Time complexity should be order of n
// #include<stdio.h>
// int main() {
// int n,i;
// scanf("%d",&n);
// int arr[n];
// for(i=0;i<n;i++)
// scanf("%d",arr[i]);

// for(i=0;i<n;i++){
//     if(arr[i])
// }
// }

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    
   // printf("The unique element in the array are:");
    int unique = arr[0];
    for(int i = 1; i < size; i++) {
        unique = unique ^ arr[i];
        //printf("%d , ",arr[i]);
    }
    
    printf("The unique element in the array is: %d", unique);

    return 0;
}
