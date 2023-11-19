#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, num3;

    // Take input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Find the maximum and minimum
    float maximum = num1;
    float minimum = num1;

    if (num2 > maximum) {
        maximum = num2;
    }
    if (num3 > maximum) {
        maximum = num3;
    }

    if (num2 < minimum) {
        minimum = num2;
    }
    if (num3 < minimum) {
        minimum = num3;
    }

    // Print the maximum and minimum
    printf("Maximum: %.2f\n", maximum);
    printf("Minimum: %.2f\n", minimum);

    return 0;
}
