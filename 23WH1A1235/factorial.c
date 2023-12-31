include<stdio.h>
int factorial(int);
void main()
{
int n,fact;
printf("\n enter a number");
scanf("%d",&n);
int a= factorial(n);
printf("%d\n",a);
return 0;
}
int factorial(int n)
{
int fact=1;
int i;
for(i=1;i<=n;i++)
{
fact = fact*i;
}
return fact;
}
