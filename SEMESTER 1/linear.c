#include<stdio.h>
int main() {
    int n,a[100],item,i,j;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched");
    scanf("%d",&item);
    for(i=0;i<n;i++) {
        if(a[i]==item) {
            printf("\n%d found at position %d",item,i+1);
            break;
        }
    }
    if(i==n)
    printf("Element is not present");
}