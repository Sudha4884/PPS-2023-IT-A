#include<stdio.h>
void main()
{
int a=10,b=30;
printf("%d is greater than %d is %d",a,b,a>b&&b<a);
printf("\n%d is greater than %d is %d",a,b,!(a>b&&b<a));
} 
