#include<stdio.h>
int factorial(int );
int main()
{
int n,f;
printf("enter a number:");
scanf("%d",&n);
f = factorial(n);
printf("factorial of %d is : %d",n,f);
return 0;
}
int factorial(int n)
{
if (n==1)
 return 1;
else
return n*factorial(n-1);
}


