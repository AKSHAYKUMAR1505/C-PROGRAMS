#include <stdio.h>

// Function prototype
int sum(int);

int main() {
    int n;
    printf("Enter the number of elements you want to add:\n");
    scanf("%d", &n);

    // Call the sum function and print the result
    printf("Sum of the elements: %d\n", sum(n));

    return 0;
}

// Function definition
int sum(int n) {
    int sum = 0;

    // Loop to calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

