#include<stdio.h>
int main()
{int a;
int b;
char o;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("enter an operator from (+,-,*,/,%)");
scanf(" %c",&o);
switch(o)
{
    case '+':
    printf("%d + %d =%d",a,b,a+b);
    break;
    case '-':
    printf("%d - %d =%d",a,b,a-b);
    break;
    case '*':
    printf("%d * %d =%d",a,b,a*b);
    break;
    case '/':
    if(b!=0){
    printf("%d / %d =%d",a,b,a/b);}
    else
    {
        printf("division with 0 is not possible");
    }
    break;
    case '%':
    if(b!=0)
    {
    printf("%d %% %d = %d",a,b,a%b);}
    else{
        printf("modulus with 0 is not possible");
    }
    break;
    default:
    printf("entered wrong operator");
} return 0;}
