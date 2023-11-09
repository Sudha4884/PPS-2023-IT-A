#include<stdio.h>
void main()
{
int x=10,y=40;
printf("\n Before swap x=%d y=%d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\n After swap x=%d y=%d",x,y);
} 
