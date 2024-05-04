#include <stdio.h>
int main()
{
    int n, i, counter = 0, c = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[counter]);
        if (arr[counter] != 0)
            counter++;
        else
            c++;
    }
    for (int i = 0; i < counter; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < c; i++)
        printf("0 ");
    return 0;
}