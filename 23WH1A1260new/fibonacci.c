#include<stdio.h>
void fib(int a,int b,int sum,int n)
{
if (n!=0)
{
printf("%d",a);
sum = a+b;
a = b;
b = sum;
n--;
fib(a, b, sum, n);
}
}
int main()
{
int n = 10;
fib(0,1,0,n);
return 0;
}
