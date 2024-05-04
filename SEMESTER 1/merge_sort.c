// #include <stdio.h>
// #include<stdlib.h>

// void merge(int arr1[],int mid,int low,int high){
//     int i,j,k,arr2[100];
//     i=low;
//     j=mid+1;
//     k=low;

//     while(i<=mid && j<=high){
//         if(arr1[i]<arr1[j]){
//             arr2[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else {
//             arr2[k]=arr1[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<=mid){
//         arr2[k]=arr1[i];
//         i++;
//         k++;
//     }
//     while(j<=high){
//         arr2[k]=arr1[j];
//         j++;
//         k++;
//     }

//     for(i=low;i<=high;i++)
//     arr1[i]=arr2[j];
// }

// void mergesort(int arr1[],int low ,int high)
// {
//     if(low<high){//atleast 2 elements must be present in the array
//         int mid=(low+high)/2 ;
//         mergesort(arr1,low,mid);
//         mergesort(arr1,mid+1,high);
//         merge(arr1,mid,low,high);
//  }
// }
//  int main(){
//     int n;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     int arr1[n];
//     printf("Enter the elements");
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr1[i]);
//     mergesort(arr1,0,n-1);
//     for(int i=0;i<n;i++)
//     printf("%d",arr1[i]);
//  }


#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
        int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    mergeSort(A, 0, n-1);
    printArray(A, n);
    return 0;
}

