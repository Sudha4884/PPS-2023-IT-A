#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci Sequence:\n");
    printf("%d, %d", first, second);

    
    for (i = 2; i < n; i++)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
