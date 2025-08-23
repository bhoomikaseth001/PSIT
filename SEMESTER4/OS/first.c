#include <stdio.h>

int main() {
    int m, p, i, j;
    printf("Enter number of memory blocks: ");
    scanf("%d", &m);
    int block[m];
    printf("Enter size of each memory block:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &block[i]);

    printf("Enter number of processes: ");
    scanf("%d", &p);
    int process[p], alloc[p];
    printf("Enter size of each process:\n");
    for (i = 0; i < p; i++) {
        scanf("%d", &process[i]);
        alloc[i] = -1; // initially not allocated
    }

    // First Fit Allocation
    for (i = 0; i < p; i++) {
        for (j = 0; j < m; j++) {
            if (block[j] >= process[i]) {
                alloc[i] = j;
                block[j] -= process[i]; // reduce block size
                break;
            }
        }
    }

    // Output Allocation Results
    printf("\nProcess No.\tSize\tBlock No.\n");
    for (i = 0; i < p; i++) {
        printf("%d\t\t%d\t", i + 1, process[i]);
        if (alloc[i] != -1)
            printf("%d\n", alloc[i] + 1);
        else
            printf("Not Allocated\n");
    }

    return 0;
}

/*Enter number of memory blocks: 
5
Enter size of each memory block:
100 500 200 300 600
Enter number of processes: 
4
Enter size of each process:
212 417 112 426*/

