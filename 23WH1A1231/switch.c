#include <stdio.h>

int main() {
    int a, b;
    char operator;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, or %): ");
    scanf(" %c", &operator);

    printf("Enter b: ");
    scanf("%d", &b);


    int result;
    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '%':
            if (b != 0) {
                result = a % b;
            } else {
                printf("Error: Cannot divide by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
