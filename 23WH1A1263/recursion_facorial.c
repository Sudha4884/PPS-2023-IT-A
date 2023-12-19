#include<stdio.h>
int factorial(int n)
{
 if(n==0 || n==1)
{
return 1;
}
else{
 return n*factorial(n-1);
}
}
void main()
{
 int p,result;
printf("Enter a value of p: ");
scanf("%d",&p);
result = factorial(p);
printf("the factorial of p is %d",result);
}


