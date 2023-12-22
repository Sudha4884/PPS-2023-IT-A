#include <stdio.h>
void main()
{
    char ch;
    printf("Char: ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        if(islower(ch))
        {
            printf("It is lower case");
        }
        else(isupper(ch))
        {
            printf("\n It is an upper case alphabet");
        }
    }
    else
    {
        if(isdigit(ch))
            printf("\n It is a number");
        else
            printf("\n It is a symbol");
    }
}
