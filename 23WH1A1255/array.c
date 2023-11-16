#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
printf("Enter c:");
scanf("%d",&c);
if(a>b)
{
if(a>c)
printf("%d is the greatest",a);
else
printf("%d is the greatest",c);
}
else
{
if(b>c){
printf("%d is the greatest",b);
}
else
printf("%d is the greatest",c);
}
}
