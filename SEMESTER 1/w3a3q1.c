#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the sequence of numbers terminated by -1:\n");
    scanf("%d", &num1);
    
    while (1) {
        scanf("%d", &num2);
        if (num2 == -1) {
            break; // Terminate when -1 is encountered
        }
        
        // Calculate and print the two-moving average
        printf("%.1f ", (float)(num1 + num2) / 2);
        
        // Update num1 to num2 for the next iteration
        num1 = num2;
    }
    
    printf("\n");

    return 0;
}
