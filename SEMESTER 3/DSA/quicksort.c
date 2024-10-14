#include<stdio.h>

void swap(int *a,int*b ){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int start, int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start ;j<end;j++){
        if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j]);
            }
    }
    swap(&arr[i+1],&arr[end]);
    return i+1;
}

void quicksort(int arr[], int start, int end){
    if(start<end){
        int p=partition(arr,start,end);
        quicksort(arr,start,p-1);
        quicksort(arr,p+1,end);
    }
}

int main(){
    // int *arr=(int*)malloc(sizeof(int));
        int arr[]={24,9,29,14,19,27};
        int n=sizeof(arr)/sizeof(int);

        quicksort(arr,0,n-1);
        for(int i=0;i<n;i++)
            printf("%d ", arr[i]);
}