#include<stdio.h>
int factorial();
int main()
{
int n,i,num;
printf("enter a number");
scanf("%d",&n);
factorial();
}
int factorial()
{
int i,n,fact;
fact=1;
for(i=1;i<n;i++)
fact=fact*i;
printf("factorial of %4d is %5d\n",n,fact);
return 1;
}

