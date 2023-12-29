#include <stdio.h>

// Recursive function to calculate GCD
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRecursive(b, a % b);
    }
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

    int result = gcdRecursive(num1, num2);
    printf("GCD of %d and %d (using recursion) = %d\n", num1, num2, result);

    return 0;
}
