#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&key);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("Binary search could not be implemented");
            return 0;
        }
    }
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1) {
      printf("Element does not exist");
    } else {
      printf("Element found at index: %d", result+1);
    }
    return 0;
}
