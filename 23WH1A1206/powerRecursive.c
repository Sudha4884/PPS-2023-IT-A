#include <stdio.h>

// Recursive function to calculate power
double powerRecursive(double x, int n) 
{
    if (n == 0) 
    {
        return 1;
    } else if (n > 0) 
    {
        return x * powerRecursive(x, n - 1);
    } else 
    {
        return 1 / (x * powerRecursive(x, -n - 1));
    }
}

int main() 
{
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent (an integer): ");
    scanf("%d", &exponent);

    double result = powerRecursive(base, exponent);
    printf("%.2lf raised to the power of %d (using recursion) = %.6lf\n", base, exponent, result);

    return 0;
}
