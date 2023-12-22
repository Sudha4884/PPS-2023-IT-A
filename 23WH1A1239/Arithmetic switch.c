#include <stdio.h>
void main()
{
    char ch;
    printf("\n Enter symbol: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+': printf("c=a+b");
                  break;
        case '-': printf("c=a-b");
                  break;
        case '*': printf("c=a*b");
                  break;
        case '/': printf("c=a/b");
                  break;
        case '%': printf("c=a%b");
                  break;
        default: printf("Not an arithmetic operation");
                 break;
    }
}
