#include<stdio.h>
int factrial(int);
int main()
{
int n, fact;
printf("enter a number");
scanf("%d",&n);
int a = factrial(n);
printf("%d",a);
return 0;
}
int factrial(int n)
{
int fact = 1;
for(int i=1;i<=n;i++)
{
fact = fact*i;
}
return fact;
}
