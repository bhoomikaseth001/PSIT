// 



//#include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n], c = 1;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
        //    arr[i]++;
//             max = arr[i];
//             c++;
//         }
//     }
//     printf("%d", c);
// }


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n ");
    for(int i=0;i<n;i++)
    {
         scanf("%d", &a[i]);
    }
    int greatest=a[0];
    int c=1;
    for (int i=0;i<n;i++)
    {
        if (greatest<a[i])
        {
            printf("Greatest element=%d ",a[i]++);
            greatest=a[i];
            c++;
        }
    }
    printf("\n Count=%d",c);
}