#include<stdio.h>
void main()
{
int x=4,y=6,z;
printf("\n before x=%d y=%d",x,y);
z=x;
x=y;
y=z;
printf("\n after swap x=%d y=%d",x,y);
} 
