#include<stdio.h> 
void main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);
is_collatz(n);
}
void is_collatz(int n)
{
int a=0;
printf("%d",n);
while(n!=1)
{
if(n%2==0)
{
n=n/2;
a++;
printf("\n%d",n);
}
else
{
n=(3*n)+1;
a++;
printf("\n%d",n);
}
}
printf("\n%d",a);
}
