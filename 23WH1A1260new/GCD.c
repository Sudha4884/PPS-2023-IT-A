#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("%d %d %d",a,b,gcd(a,b));
return 0;
}
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b, a%b);
}
