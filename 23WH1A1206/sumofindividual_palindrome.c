#include <stdio.h>

int main()
{
    int num, originalNum, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    originalNum = num;

    // Calculating sum of digits
    while (num > 0)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    // Checking for palindrome
    int reverse = 0;
    num = originalNum; 

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reverse) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
