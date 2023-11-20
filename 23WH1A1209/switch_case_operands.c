#include<stdio.h>
void main()
{
    int a,b,result;
    char operand;
    printf("\n Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\nEnter a operand: ");
    scanf(" %c",&operand);
    switch(operand)
    {
        case '+':
        result = a+b;
        printf("%d",result);
        break;
        case '-':
        result = a-b;
        printf("%d",result);
        break;
        case '*':
        result = a*b;
        printf("%d",result);
        break;
        case '/':
        result = a/b;
        printf("%d",result);
        case '%':
        result = a%b;
        printf("%d",result);
        break;
    }
}
