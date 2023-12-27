#include <stdio.h>

int main() {
    int a, b;
    
    // Getting input values from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Arithmetic operators
    printf("Arithmetic Operators:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n\n", a, b, a % b);
    
    // Relational operators
    printf("Relational Operators:\n");
    printf("%d > %d is %s\n", a, b, a > b ? "true" : "false");
    printf("%d < %d is %s\n", a, b, a < b ? "true" : "false");
    printf("%d >= %d is %s\n", a, b, a >= b ? "true" : "false");
    printf("%d <= %d is %s\n", a, b, a <= b ? "true" : "false");
    printf("%d == %d is %s\n", a, b, a == b ? "true" : "false");
    printf("%d != %d is %s\n\n", a, b, a != b ? "true" : "false");
    
    // Logical operators
    printf("Logical Operators:\n");
    printf("AND: %d && %d = %d\n", a, b, a && b);
    printf("OR: %d || %d = %d\n", a, b, a || b);
    printf("NOT: !%d = %d, !%d = %d\n\n", a, !a, b, !b);
    
    // Bitwise operators
    printf("Bitwise Operators:\n");
    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b);
    printf("Bitwise NOT: ~%d = %d, ~%d = %d\n", a, ~a, b, ~b);
    
    // Increment and decrement operators
    int c = a;
    printf("\nIncrement/Decrement Operators:\n");
    printf("a++ (Post-increment): a = %d, a++ = %d\n", a, a++);
    printf("b-- (Post-decrement): b = %d, b-- = %d\n", b, b--);
    printf("++c (Pre-increment): c = %d, ++c = %d\n", c, ++c);
    
    return 0;
}
