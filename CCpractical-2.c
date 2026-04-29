#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int choice;

    printf("1. Display prime numbers in a range\n");
    printf("2. Check if a number is prime\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Option 1: Range
    if (choice == 1) {
        int start, end;

        printf("Enter starting number: ");
        scanf("%d", &start);
        printf("Enter ending number: ");
        scanf("%d", &end);

        printf("Prime numbers in the range are:\n");
        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                printf("%d ", i);
            }
        }
    }

    // Option 2: Single number
    else if (choice == 2) {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("%d is a Prime number\n", num);
        } else {
            printf("%d is NOT a Prime number\n", num);
        }
    }

    // Invalid choice
    else {
        printf("Invalid choice\n");
    }

    return 0;
}