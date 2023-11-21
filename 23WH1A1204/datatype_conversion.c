#include <stdio.h>

int main() {
  //printf() displays the string inside quotation
 double doubleValue;

    // Input value from the user
    printf("Enter a floating-point number: ");
    scanf("%lf", &doubleValue);

    // Auto Conversion (Implicit Conversion)
    int intValueAuto = doubleValue;

    // Casting (Explicit Conversion)
    int intValueCasting = (int)doubleValue;

    // Display the results
    printf("\nAuto Conversion Result:\n");
    printf("Original value: %lf\n", doubleValue);
    printf("Converted to int (auto): %d\n", intValueAuto);

    printf("\nCasting Result:\n");
    printf("Original value: %lf\n", doubleValue);
    printf("Converted to int (casting): %d\n", intValueCasting);
  return 0;
}
