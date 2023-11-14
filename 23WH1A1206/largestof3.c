#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("A is the largest number");
else if(b>c && b>a)
printf("B is the largest number");
else
printf("C is the largest number");
}
