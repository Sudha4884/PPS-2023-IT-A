#include<stdio.h>
int factorial (int n);
void main()
{
int i,n;
printf("enter the numbers");
scanf("%d",&n);
i=factorial(n);
printf("%d",&i);
}
int factorial(int n)
{
if (n==0)
return 1;
else
return n*(n-1);
}

