#include<stdio.h>
#include<stdlib.h>

void spiral_print(int n, int **arr) {
    int top = 0, left = 0, bottom = n - 1, right = n - 1, i;

    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++)
            printf("%d ", arr[top][i]);
        top++;

        for (i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        if (top <= bottom) {
            for (i = right; i >= left; i--)
                printf("%d ", arr[bottom][i]);
            bottom--;
        }

        if (left <= right) {
            for (i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }
}

int main() {
    int n;
    int **arr;
    scanf("%d", &n);
    
    arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) 
        arr[i] = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    spiral_print(n, arr);

    for (int i = 0; i < n; i++)
        free(arr[i]);

    free(arr);
    return 0;
}
