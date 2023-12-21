#include<stdio.h>
int gcd(int,int);
void main()
{
int x,y,res;
printf("enter any two numbers");
scanf("%d %d",&x,&y);
res = gcd(x,y);
printf("\ngreatest common divisor of %d & %d is %d",x,y,res);
}
int gcd(int a,int b)
{
if(b==0)
  return a;
else if(a<b)
  return gcd(b,a);
else
  return gcd(b,a%b);
}
