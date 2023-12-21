#include<stdio.h>
#define PI 3.14
float areaOfCircle(float);
int main()
{

 float radius,a;
 scanf("%f",&radius);
 a = areaOfCircle(radius);
 printf("\n area is %f",a);
  
}
float areaOfCircle(float r)
{
  float area;
  area = PI*r*r;
  return area;
}
