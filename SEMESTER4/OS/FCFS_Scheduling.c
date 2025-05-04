#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Columns: 0 -> Process ID, 1 -> Arrival Time, 2 -> Burst Time, 3 -> Completion Time, 4 -> Turnaround Time, 5 -> Waiting Time
    int process[n][6];

    // Input process details
    printf("Enter Arrival Time and Burst Time for each process:\n");
    for (int i = 0; i < n; i++) {
        process[i][0] = i + 1; // Process ID
        printf("Process P%d:\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &process[i][1]);
        printf("Burst Time: ");
        scanf("%d", &process[i][2]);
    }

    // Sorting processes by arrival time (FCFS needs processes in order of arrival)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (process[j][1] > process[j + 1][1]) {
                for (int k = 0; k < 6; k++) {
                    int temp = process[j][k];
                    process[j][k] = process[j + 1][k];
                    process[j + 1][k] = temp;
                }
            }
        }
    }

    int current_time = 0;
    float total_TAT = 0, total_WT = 0;

    // Calculating Completion Time, Turnaround Time, and Waiting Time
    for (int i = 0; i < n; i++) {
        if (current_time < process[i][1]) {
            current_time = process[i][1]; // CPU idle handling
        }
        process[i][3] = current_time + process[i][2]; // Completion Time
        process[i][4] = process[i][3] - process[i][1]; // Turnaround Time
        process[i][5] = process[i][4] - process[i][2]; // Waiting Time

        current_time = process[i][3];

        total_TAT += process[i][4];
        total_WT += process[i][5];
    }

    // Output
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", process[i][0], process[i][1], process[i][2], process[i][3], process[i][4], process[i][5]);
    }

    printf("\nAverage Turnaround Time = %.2f\n", total_TAT / n);
    printf("Average Waiting Time = %.2f\n", total_WT / n);

    return 0;
}
