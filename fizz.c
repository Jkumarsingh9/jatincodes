#include <stdio.h>

int main() {
    int months;

    // Input the number of months
    printf("Enter the number of months: ");
    scanf("%d", &months);

    // Initialize variables to track the number of Fibbits in the current and previous months
    int currentFibbits = 1; // Initially, there is one pair of Fibbits
    int previousFibbits = 0;

    // Simulate Fibbit population growth for the specified number of months
    for (int i = 1; i <= months; i++) {
        // Calculate the number of new offspring pairs in this month
        int newOffspring = previousFibbits;

        // Update the current and previous Fibbits counts for the next month
        int temp = currentFibbits;
        currentFibbits = currentFibbits + newOffspring;
        previousFibbits = temp;

        // Print the current month's population
        printf("Month %d: %d pairs of Fibbits\n", i, currentFibbits);
    }

    // Print the total number of pairs of Fibbits at the end of the specified period
    printf("Total Fibbits after %d months: %d pairs\n", months, currentFibbits);

    return 0;
}
