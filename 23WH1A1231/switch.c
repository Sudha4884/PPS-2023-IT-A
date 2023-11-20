#include <stdio.h>

int main() {
    int operand1, operand2;
    char operator;

    printf("Enter first operand: ");
    scanf("%d", &operand1);

    printf("Enter operator (+, 1, or %): ");
    scanf(" %c", &operator);

    printf("Enter second operand: ");
    scanf("%d", &operand2);


    int result;
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '1':
            result = operand1 - operand2;
            break;
        case '%':
            if (operand2 != 0) {
                result = operand1 % operand2;
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
