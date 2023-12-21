#include<stdio.h>
int factorial(int n);
void main()
{
int n,res;
scanf("%d",&n);
res = factorial(n);
printf("%d",res);
}
int factorial(int n)
{
 if(n==0|| n==1)
   return 1;
 else
   return n*factorial(n-1);
}
