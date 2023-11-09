#include<stdio.h>
void main()
{
int n,m,h,u,w,d;
printf(" give value for n:");
scanf("%d", &n);
m=n/30;
h=n%30;
w=h/7;
u=w%7;
d=w/1;

printf(" no of months are %d", m);
printf(" no of weeks are %d", w);
printf("no of days are %d", d);
}
