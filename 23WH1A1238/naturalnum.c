#include<stdio.h>
void naturalnum(int);
void main()
{
naturalnum(10);
}
void naturalnum(int n)
{
if (n==0)
 return ;
else
{
naturalnum(n-1);
printf("%4d",n);
}
}
