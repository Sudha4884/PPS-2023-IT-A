#include<stdio.h>
int factorial(int);
void main()
{
int k,f;
printf("enter any number: ");
scanf("%d",&k);
f= factorial(k);
printf("\nfactorial is: %d\n",f);
}
int factorial(int n)
{
if(n==0 || n==1)
 return 1;
else
 return n*factorial(n-1);
}
