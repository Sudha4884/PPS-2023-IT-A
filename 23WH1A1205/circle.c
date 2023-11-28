#include<stdio.h>
#define PI 3.14
int areaOfCircle(int);
int main()
{
int radius;
float a;
scanf("%d",&radius);
a=areaOfCircle(radius);
return 0;
}
int areaOfCircle(int r)
{
float area;
area=PI *r*r;
printf("%f ",area);
}
