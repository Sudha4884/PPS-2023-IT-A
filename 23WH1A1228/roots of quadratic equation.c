#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, d, r1, r2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    // real and different roots
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1 = %.2lf and r2 = %.2lf", r1, r2);
    }

    // real and equal roots
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %.2lf;", r1);
    }

    //  roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("r1 = %.2lf+%.2lfi and r2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
