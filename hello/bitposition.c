#include <stdio.h>

int main() {
    int number, bitPosition;

    // Accept user input
    printf("Enter a positive number: ");
    scanf("%d", &number);
    printf("Enter the bit position: ");
    scanf("%d", &bitPosition);

    // (a) Set the particular bit on (make it 1)
    int set_result = number | (1 << bitPosition);

    // (b) Check if a particular bit is on (i.e., it is 1)
    int check_result = (number >> bitPosition) & 1;

    // (c) Toggle the bit (if it's 1, make it 0, and vice versa)
    int toggle_result = number ^ (1 << bitPosition);

    // (d) Clear the bit (make it 0)
    int clear_result = number & ~(1 << bitPosition);

    // Display results
    printf("Number after setting the bit: %d\n", set_result);
    printf("Bit at position %d is %s\n", bitPosition, check_result ? "ON" : "OFF");
    printf("Number after toggling the bit: %d\n", toggle_result);
    printf("Number after clearing the bit: %d\n", clear_result);

    return 0;
}
