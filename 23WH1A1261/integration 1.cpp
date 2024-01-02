#include <stdio.h>
#include <math.h>

// Define the function to be integrated
double function(double x) {
    return x * x;  // Change this function as needed
}

// Function to perform numerical integration using the trapezoidal rule
double integrate(double a, double b, int n) {
    double h = (b - a) / n;
    double result = 0.5 * (function(a) + function(b));

    for(int i = 1; i < n; ++i) {
        result += function(a + i * h);
    }

    result *= h;
    return result;
}

int main() {
    double a, b;
    int n;

    // Input
    printf("Enter the lower limit of integration (a): ");
    scanf("%lf", &a);
    printf("Enter the upper limit of integration (b): ");
    scanf("%lf", &b);
    printf("Enter the number of subintervals (n): ");
    scanf("%d", &n);

    // Perform numerical integration
    double result = integrate(a, b, n);

    // Output
    printf("The definite integral of the function from %.2f to %.2f is: %.6f\n", a, b, result);

    return 0;
}

