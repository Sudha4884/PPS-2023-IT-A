#include <stdio.h>

int main() { int a,b;
  //printf() displays the string inside quotation
 printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Arithmetic operators
    printf("\nArithmetic Operators:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b); // % is the modulus operator

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
    printf("%d && %d is %d\n", a, b, a && b); // logical AND
    printf("%d || %d is %d\n", a, b, a || b); // logical OR
    printf("!(%d) is %d\n", a, !a);           // logical NOT

    // Bitwise operators
    printf("\nBitwise Operators:\n");
    printf("%d & %d is %d\n", a, b, a & b);  // bitwise AND
    printf("%d | %d is %d\n", a, b, a | b);  // bitwise OR
    printf("%d ^ %d is %d\n", a, b, a ^ b);  // bitwise XOR
    printf("~%d is %d\n", a, ~a);            // bitwise NOT

    // Increment and Decrement operators
    printf("\nIncrement and Decrement Operators:\n");
    printf("++%d is %d\n", a, ++a); // pre-increment
    printf("--%d is %d\n", a, --a); // pre-decrement
    printf("%d++ is %d\n", b, b++); // post-increment
    printf("%d-- is %d\n", b, b--); // post-decrement
  return 0;
}