#include<stdio.h>
void main()
{
int number;
int factors = 0;

printf("Enter a number ");
scanf("%d",&number);
int i;
for(i=1;i<=number;i++)
{
if(number%i==0)
{
factors++;
}
}
if(factors==2)
{
printf("It's a prime number\n");
}
else
{
printf("It's not a prime number\n");
}
}
