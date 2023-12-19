//learning usage of arrays
#include<stdio.h>
int main()
{
int b,i,max;
int a[5];
printf("enter your numbers : ");
scanf("%d",&b);
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
max = a[0];
for(i=1;i<5;i++)
{
if (a[i]>max)
max = a[i];
}
printf("max is %d", max);
return 0;
}
