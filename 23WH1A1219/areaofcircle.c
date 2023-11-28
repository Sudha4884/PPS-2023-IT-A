#include<stdio.h>
#define PI 3.14
void areaofcircle(float);
int main()
{
float radius;
printf("Enter radius of a circle");
scanf("%f",&radius);
areaofcircle(radius);
return 0;
}
void areaofcircle(float r)
{
float area;
area=PI*r*r;
printf("\n Area of circle with radius %f is %f",r,area);
}

