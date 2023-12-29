#include <stdio.h>

int main() {
    int number, rows;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    printf("Multiplication table for %d up to %d rows:\n", number, rows);
    for (int i = 1; i <= rows; ++i)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
