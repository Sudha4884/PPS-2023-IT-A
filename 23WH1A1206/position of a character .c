#include <stdio.h>
#include <string.h>

int findPosition(char *S, char ch) 
{
    int length = strlen(S);

    for (int i = 0; i < length; i++) 
    {
        if (S[i] == ch)
        {
            return i; 
        }
    }
    return -1; 
}

int main() {
    char inputString[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Enter a character to find: ");
    scanf(" %c", &ch); 
    int position = findPosition(inputString, ch);
    
    if (position != -1) 
    {
        printf("The position of '%c' in the string is: %d\n", ch, position);
    } else {
        printf("'%c' is not present in the string.\n", ch);
    }

    return 0;
}
