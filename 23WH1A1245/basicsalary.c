#include<stdio.h>
void main()
{
int b, da,hr,n;
printf(" give value for basic salary:");
scanf("%d",&b);

da=b*50/100;
hr=b*10/100;
n=da+hr+b;

printf(" da is %d",da);
printf(" hr is %d",hr);
printf("net is %d",n);
}
