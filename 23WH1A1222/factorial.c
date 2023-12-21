#include<stdio.h>
int rec_factorial(int n);
int main()
{
int n1,res;
printf("\n enter any integer number: ");
scanf("%d",&n1);
res = rec_factorial(n1);
printf("\n factorial of %d is : %d",n1,res);
return 0;
}
int rec_factorial(int n)
{
if(n==0)
return 1;
else
return n*rec_factorial(n-1);
}
