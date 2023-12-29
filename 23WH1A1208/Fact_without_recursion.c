#include <stdio.h>

// Non recursive function to calculate factorial
unsigned long long int factorialIterative(int n) 
{
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    unsigned long long int result = factorialIterative(number);
    printf("Factorial of %d (using iteration) = %llu\n", number, result);

    return 0;
}
