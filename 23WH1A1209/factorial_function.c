#include<stdio.h>
int factorial(int);
int main()
{
int x,f,res;
printf("Enter a number: ");
scanf("%d",x);
res= factorial(x);
return 0;
}
int factorial(int x)
{int i,res;
int f=1;
for (i=1;i<x;i++)
{
f=f*i;
}
printf("The factorial is %d",res);

return 1;
}
