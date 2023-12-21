#include<stdio.h>
void main()
{
 int n,rev=0,t;
  printf("n=");
scanf("%d",&n);
t=n;
 while(t>0)
{
t=n%10;
rev=rev*10+t;
n=n/10;
}
printf("%d",rev);
}

