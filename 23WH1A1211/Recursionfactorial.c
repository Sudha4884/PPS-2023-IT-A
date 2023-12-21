#include<stdio.h>
int factorial(int n);
void main()
{
int n,f;
printf("enter number =");
scanf("%d",&n);
f=factorial(n);
printf("%d",f);
}
int factorial(int n)
{
if(n==0)
  return 1;
else
  return n*factorial(n-1);
 printf("%d",n);
}
