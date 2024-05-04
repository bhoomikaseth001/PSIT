//Time complexity =Order of(n.k)
//Space complexity =ordreof(1)
#include<stdio.h>
int main() {
    int n,i,j,k,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of steps");
    scanf("%d",&k);
    printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    for(i=1;i<=k;i++) {
        temp=arr[n-1];
        for(j=n-2;j>=0;j--)
        arr[j+1]=arr[j];
        arr[0]=temp;
    }
 for(i=0;i<n;i++)
 printf("%d",arr[i]);
}

// #include<stdio.h>
// int main() {
//     int n,i,j,k,temp;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the number of steps");
//     scanf("%d",&k);
//     int rot[k];
//     printf("Enter the elements");
//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);
//         for(i=1;i<=k;i++) {
//             temp=arr[i]; 
//             temp+=rot[i];
//         }
//         for(i=0;i<n;i++)
//         printf("%d",arr[i]);
// }
