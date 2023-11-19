#include <stdio.h>

int main() {
    int a, b;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Arithmetic operators
    printf("\nArithmetic Operators:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    // Relational operators
    printf("\nRelational Operators:\n");
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d <= %d is %d\n", a, b, a <= b);

    // Logical operators
    printf("\nLogical Operators:\n");
    printf("(%d && %d) is %d\n", a, b, a && b);
    printf("(%d || %d) is %d\n", a, b, a || b);

    // Bitwise operators
    printf("\nBitwise Operators:\n");
    printf("%d & %d is %d\n", a, b, a & b);
    printf("%d | %d is %d\n", a, b, a | b);
    printf("%d ^ %d is %d\n", a, b, a ^ b);


    return 0;
}
