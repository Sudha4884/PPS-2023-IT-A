#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative value for n.\n");
        return 1;
    }

    // Calculating the sum of the geometric progression
    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }

    printf("Sum of the geometric progression: %.2lf\n", sum);

    return 0;
}
