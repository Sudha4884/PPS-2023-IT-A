#include <stdio.h>

// Non recursive function to calculate power
double powerIterative(double x, int n) {
    double result = 1.0;

    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            result *= x;
        }
    } else {
        for (int i = 0; i > n; i--) {
            result /= x;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent (an integer): ");
    scanf("%d", &exponent);

    double result = powerIterative(base, exponent);
    printf("%.2lf raised to the power of %d (using iteration) = %.6lf\n", base, exponent, result);

    return 0;
}
