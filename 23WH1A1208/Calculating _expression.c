#include <stdio.h>
#include <math.h>

int main() 
{
    double x, result;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    result = 1 - (x / 2) + (pow(x, 2) / 4) - (pow(x, 3) / 6);

    printf("Result: %.4lf\n", result);

    return 0;
}
