#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
    int length = strlen(str);
    int i = 0, j = length - 1;

    
    while (i < j) {
        while (!isalpha(str[i]) && i < j) {
            i++;
        }
        while (!isalpha(str[j]) && i < j) {
            j--;
        }

        if (tolower(str[i]) != tolower(str[j])) {
            return 0; 
        }
        i++;
        j--;
    }

    return 1; 
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isPalindrome(inputString)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
