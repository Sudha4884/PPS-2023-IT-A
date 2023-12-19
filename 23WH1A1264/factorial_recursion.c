#include<stdio.h>
int factorial(int n)
{
 if( n==0 || n==1)
{
return 1;
}
else{
 return n*factorial(n-1);
}
}
void main()
{
int a;
printf("entera");
scanf("%d",&a);
 int result;
result=factorial(a);
printf("the factorial of 5 is %d",result);
}

