#include<stdio.h>
int factorial( int n);
void main()
{
int n,res;
printf("Enter a number n: ");
scanf("%d", &n);

res=factorial(n);
if (res== 1)
    printf("The factorial of 0 is 0");
else
    printf("The factorial of %d is %d", n, res);
}

int factorial(int n)
{
if ( n==0)
    return 1;
else
    return n*factorial(n-1);
}
