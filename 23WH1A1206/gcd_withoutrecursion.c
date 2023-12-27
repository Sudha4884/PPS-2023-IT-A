#include <stdio.h>

// Iterative function to calculate GCD
int gcdIterative(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) 
    {
        printf("Please enter non-negative integers.\n");
        return 1;
    }

    int result = gcdIterative(num1, num2);
    printf("GCD of %d and %d (using iteration) = %d\n", num1, num2, result);

    return 0;
}
