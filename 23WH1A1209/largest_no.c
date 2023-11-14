#include<stdio.h>
void main()
{
int num1,num2,num3,largest;

printf("Enter a number1: ");
scanf("\n %d", &num1);

printf("Enter a number2: ");
scanf("\n %d", &num2);

printf("Enter a number3: ");
scanf("\n %d", &num3);

if(num1>num2)
{if (num1>num3)
 largest=num1;
 else
 largest=num3;
}
else
 largest=num2;
printf("The largest number is %d",largest);
}
