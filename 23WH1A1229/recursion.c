#include<stdio.h>
int factorial(int);
int main()
{
int n,f;
printf("\n enter n:");
scanf("%d",&n);
f = factorial(n);
printf("factorial of %d is : %d",n,f);
return 0;
}
int factorial(int n)
{
if(n == 0)
return 1;
else
return n * factorial(n-1);
}

