#include<stdio.h>
void main()
{
int a,b,c; 
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\n%d\n%d",a,b);
}
