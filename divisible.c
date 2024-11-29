#include <stdio.h>

int main() {
    int num;         // Variable to store the number entered by the user
    int product = 1; // Variable to store the product of numbers (starts at 1)

    while (1) { // Infinite loop that will only stop when a number divisible by 5 is entered
        printf("Enter a number: ");
        scanf("%d", &num); // Take input from the user

        // Check if the number is divisible by 5
        if (num % 5 == 0) {
            break; // Exit the loop if the number is divisible by 5
        }

        // Multiply the current number with the product
        product *= num;
    }

    // Display the result
    printf("The product of the entered numbers is: %d\n", product);

    }

