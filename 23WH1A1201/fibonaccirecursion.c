#include<stdio.h>
int fibonacci(int);
void main()
{
int n,fibo,i;
printf("enter the number of elements in the series: ");
scanf("%d",& n);
for(i=0;i<n;i++)
 {
  fibo= fibonacci(i);
  printf("%d\t",fibo);
 }
}
int fibonacci(int n)
{
if(n==0)
 return 0;
else if(n==1)
 return 1;
else
 return fibonacci(n-1)+fibonacci(n-2);
}

