#include<stdio.h>
int  gcd(int a,int b);
void main()
{
int a,b,temp;
 printf("enter a and b elements");
 scanf("%d%d",&a,&b);
 temp = gcd(a,b);
 printf("%d",temp);
}
int gcd(int a,int b)
{
if (b==0)
return a;
else
return gcd(b,a%b);
}
