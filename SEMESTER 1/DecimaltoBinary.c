#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i, counter = 0;
    printf("Enter a decimal number to convert to binary : ");
    scanf("%d", &n);
    int temp = n;

    while (n > 0)
    {
        n /= 2;
        counter++;
    }
    n = temp;
    int *bin = (int *)malloc(counter * sizeof(int));
    for (int i = counter - 1; i >= 0; i--)
    {
        bin[i] = n % 2;
        n /= 2;
    }
    for (i = 0; i < counter; i++)
        printf("%d ", bin[i]);

    printf("\n");

    for (i = 0; i < counter; i++)
        printf("%d ", !bin[i]);

    int dec = 0, k = 0;
    for (i = counter - 1; i >= 0; i--)
    {
        dec += !bin[i] * (pow(2, (k)));
        k++;
    }

    printf("\n%d", dec);
}
