#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    double sum = 0;

  
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (int i = 0; i <= n; ++i) {
        sum = sum+ pow(x, i);
    }

    printf("Sum of the geometric progression: %lf\n", sum);

    return 0;
}


