#include<stdio.h>
void main()
{
int n,r,a=0,t;
printf("enter a number");
scanf("%d",&n);
t=n;
while(n!=0)
{r=n%10;
a=a+r*r*r;
n=n/10;
}
if(a==t)
printf("it is an amstrong");
else
printf("not an amstrong");
}
