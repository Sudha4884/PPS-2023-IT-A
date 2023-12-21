#include<stdio.h>
int factorial(int);
void main()
{
int n,f;
printf("enter a number");
scanf("%d", &n);
f = factorial(n);
printf("factorial of %d is :%d ",n,f);

}
int factorial(int n)
{
if (n == 0)
return 1;
else
return n*factorial(n-1);
}

