#include<stdio.h>
void main()
{
int a,b,p1,p2,q1,q2,r,s;
p1=++a;
p2=a++;
q1=a&&b;
q2=a||b;
r=~a;
s=~b;
printf("\n %d %d %d %d %d %d",&p1,&p2,&q1,&q2,&r,&s);
}
