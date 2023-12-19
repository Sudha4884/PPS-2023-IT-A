#include<stdio.h>
int factorialRecurssive(int);
int main()
{
 int n,a;
printf("Enter n:");
scanf("%d",&n);
a = factorialRecurssive(n);
printf("result = %d",a);
}
int factorialRecurssive(int n)
{
if(n == 0)
return 1;
else
return n*factorialRecurssive(n-1);
}
