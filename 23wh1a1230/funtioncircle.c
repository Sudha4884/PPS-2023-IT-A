#include<stdio.h>
#define pi 3.14
void areaOfCircle(float);
int main()
{
 float radius
 printf("Enter a radius");
 scanf("%f",&radius);
 areaOfCircle(radius);
 printf("Hello World");
 return 0;
}
void areaOfCircle(float r)
{
float area;
area = pi*r*r;
printf("\n Area of the circle with radius %f is %f",r,area);
}

