#include<stdio.h>
int collatz(int n)
{
if (n%2==0)
{
return n/2;
}
else {
return 3*n+1;
}
}
void print_collatz(int n)
{
printf("%d",n);
while (n!=1)
{
n = collatz(n);
printf("%d",n);
}
}
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
print_collatz(n);
return 0;
}
