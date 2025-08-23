#include <stdio.h>

int main() {
    int clm[7][5], alloc[7][5], req[7][5], rsrc[5], avail[5], comp[7] = {0}, safeSeq[7];
    int p, r, i, j, count = 0;

    printf("Enter number of processes and resources: ");
    scanf("%d %d", &p, &r);

    printf("Enter claim (max need) matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &clm[i][j]);

    printf("Enter allocation matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &alloc[i][j]);

    printf("Enter total resources:\n");
    for (j = 0; j < r; j++) {
        scanf("%d", &rsrc[j]);
        avail[j] = rsrc[j];
        for (i = 0; i < p; i++)
            avail[j] -= alloc[i][j];
    }

    // Calculate request matrix
    for (i = 0; i < p; i++)
        for (j = 0; j < r; j++)
            req[i][j] = clm[i][j] - alloc[i][j];

    while (count < p) {
        int executed = 0;
        for (i = 0; i < p; i++) {
            if (!comp[i]) {
                int canExecute = 1;
                for (j = 0; j < r; j++) {
                    if (req[i][j] > avail[j]) {
                        canExecute = 0;
                        break;
                    }
                }
                if (canExecute) {
                    for (j = 0; j < r; j++)
                        avail[j] += alloc[i][j];
                    safeSeq[count++] = i;
                    comp[i] = 1;
                    executed = 1;
                }
            }
        }
        if (!executed)
            break;
    }

    if (count == p) {
        printf("System is in a safe state.\nSafe sequence: ");
        for (i = 0; i < p; i++)
            printf("P%d%s", safeSeq[i] + 1, (i < p - 1) ? " -> " : "\n");
    } else {
        printf("System is in an unsafe state. No safe sequence exists.\n");
    }

    return 0;
}



