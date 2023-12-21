#include<stdio.h>

int gcd(int a,int b);

void main()
{
int a,b;
printf("a = , b=");
scanf("%d %d",&a,&b);
printf("%d",gcd(a,b));
}
int gcd(int a,int b)
{
if(b==0)
  return a;
else
  return gcd(b,a%b);
 
}

