#include<stdio.h>
#define PI 3.14
void area_of_circle(float);
int main()
{
float radius;
printf("\n enter radius");
scanf("%f",&radius);
area_of_circle(radius);
return 0;
}
void area_of_circle(float r)
{
float area;
area = PI*r*r;
printf("\n area of circle wit radius %f is %f",r,area);
}

