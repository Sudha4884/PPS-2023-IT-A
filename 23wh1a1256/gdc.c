//GDC
#include<stdio.h>
int main()
{
int a,b,i,gcd;
printf("enter a number a :");
scanf("%d",&a);
printf("enter a number b :");
scanf("%d",&b);
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
gcd=i;
}
printf("gcd of two numbers is %d and %d  is %d",a,b,gcd);
return 0;
}

