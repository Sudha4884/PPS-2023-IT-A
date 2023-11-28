#include<stdio.h>
#define PI 3.14
float area_of_circle(float);
int main()
{
float radius,a;
printf("\n enter radius");
scanf("%f",&radius);
a =area_of_circle(radius);
printf("\n area is %f",a);
return 0;
}
float area_of_circle(float r)
{
 float area;
 area = PI*r*r;
 return area;
}


