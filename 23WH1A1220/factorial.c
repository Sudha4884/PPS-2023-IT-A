#include<stdio.h>
int recFactorial(int n);
int  main()
{
int n1,res;
printf("\n enter number");
scanf("%d",&n1);
res=recFactorial(n1);
printf("\n factorial of %d is %d",n1,res);
return 0;
}
int recFactorial(int n)
{
if(n==0)
return 1;
else
return n*recFactorial(n-1);
}
