#include<stdio.h>
int fibonacci(int n)
{
if(n<=1)
{
 return n;
}
else {
return fibonacci(n-1)+fibonacci(n-2);
}
}
int main()
{
int n,i;
printf("Enter a value of n: ");
scanf("%d",&n);
printf("fibonacci series: ");
 for (i=0;i<n;i++)
{
printf("\n%d",fibonacci(i));
}
return 0;
}

