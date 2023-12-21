#include<stdio.h>
#define PI 3.14f
float areaOfCircle(float);
int main()
{
 float radius,area;
 scanf("%f", &radius);
 area=areaOfCircle(radius);
printf("\n area of the circle with radius %f is %f",radius,area);
 return 0 ;
}
 float areaOfCircle(float r)
{ 
 float area;
 area= PI*r*r;
 return area;
}
