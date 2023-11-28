#include<stdio.h>
int factorial(int);
void main()
{
int n,a;
printf("enter a n value");
scanf("%d", &n);
a = factorial(n);
printf("%d", a);
}
int factorial(int n)
{
int fact = 1;
for(int i = 1; i<=n;i++) 
{
fact = fact*i;

}
 return fact;
}

