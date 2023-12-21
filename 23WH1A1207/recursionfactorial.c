#include<stdio.h>
void main()
{
int n,f;
printf("\n enter the factorial number u need : ");
scanf("%d",&n);
f=factorial(n);
printf("\n %d",f);
}

int factorial(int n)
{
if (n==0)
return 1;
else
return n*factorial(n-1);
}
