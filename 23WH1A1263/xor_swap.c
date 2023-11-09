#include<stdio.h>
void main()
{
int a=3,b=2;
printf("Enter the values of a,b");
scanf("%d%d",&a,&b);
printf("\n Before a=%d b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n After swap a=%d b=%d",a,b);
} 
