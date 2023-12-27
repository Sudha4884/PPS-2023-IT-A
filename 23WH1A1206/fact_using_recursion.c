#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    unsigned long long int result = factorialRecursive(number);
    printf("Factorial of %d (using recursion) = %llu\n", number, result);

    return 0;
}
