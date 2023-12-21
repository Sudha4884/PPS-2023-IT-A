#include<stdio.h>
int factorial(int n);
void main()
{
int n,x;
printf("Enter a number");
scanf("%d",&n);
x = factorial(n);
printf("%d",x);
}
int factorial(int n)
{
if(n == 0)
return 1;
else 
return n * factorial(n-1);
}

