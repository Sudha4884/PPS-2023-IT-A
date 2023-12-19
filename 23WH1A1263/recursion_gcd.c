#include<stdio.h>
int gcd(int a,int b)
{
 if(b==0)
{
 return a;
}
else{
return gcd(b,a%b);
}
}
void main()
{
int a,b;
printf("Enter a value of a: ");
scanf("%d",&a);
printf("Enter a value of b: ");
scanf("%d",&b);
int result;
result = gcd(a,b);
printf("the gcd of a,b is %d",result);
}
