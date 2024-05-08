#include <stdio.h>

// Function to check if a number is part of the Fibonacci sequence
int isFibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    int a = 0, b = 1, c;
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == num) ? 1 : 0;
}

// Recursive function to find the sum of numbers at Fibonacci positions
int sumFibonacciIndices(int arr[], int index, int n) {
    if (index < n) {
        if (isFibonacci(index)) {
            return arr[index] + sumFibonacciIndices(arr, index + 1, n);
        } else {
            return sumFibonacciIndices(arr, index + 1, n);
        }
    }
    return 0;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumFibonacciIndices(arr, 0, n);
    printf("Sum of elements at Fibonacci indices: %d\n", sum);

    return 0;
}
