//time complexity = order of n
//space complexity = order of n
#include<stdio.h>
int main() {
    int n,i,c=0,max=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++) {
        if(arr[i]==1) {
            c++;
        continue;
        }
        if(c>max)
         max=c;
        c=0;
    }
    printf("%d",max);
    return 0;
}