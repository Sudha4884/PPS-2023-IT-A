#include<stdio.h>
#define PI 3.14
float areaOfCircle(float);
int main()
{
 float radius,a;
 printf("enter the radius");
 scanf("%f", &radius);
 a=areaOfCircle(radius);
 printf("\n area is %f",a);
 return 0;
}
 float areaOfCircle(float r)
{
 float area;
 area= PI*r*r;
 return area;
}
