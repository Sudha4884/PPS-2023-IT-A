#include<stdio.h>
#define PI 3.14
float areaOfCircle(float);
int main()
{
float radius;
printf("\n enter radius");
scanf("%f", &radius);
areaOfCircle(radius);
return 0;
}
float areaOfCircle(float r)
{
float area;
area = PI*r*r;
printf("\n area of the circle with radius %f is %f",r, area);
}
