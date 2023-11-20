#include <stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter symbol: ");
    scanf("%c",&ch);
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+' : printf("%d",a+b);
                   break;
        case '-' : printf("%d",a-b);
                   break;
        case '*' : printf("%d",a*b);
                   break;
        case '/' : printf("%d",a/b);
                   break;
        case '%' : printf("%d",a%b);
                   break;
    }
}
