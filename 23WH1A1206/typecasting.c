#include <stdio.h>

int main() {
    int integerInput;
    float floatInput;

    
    printf("Enter an integer value: ");
    scanf("%d", &integerInput);
    
    printf("Enter a float value: ");
    scanf("%f", &floatInput);

   
    int Auto = integerInput + floatInput;
    printf("Auto-converted result: %d\n", Auto);

    // Casting
    float Casted = (float)integerInput + floatInput;
    printf("Casted result: %f\n", Casted);

    return 0;
}
