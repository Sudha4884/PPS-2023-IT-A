#include<stdio.h>
#define PI 3.14
float areaofcircle(float);
void main() {
float r,area;
printf("enter radius:");
scanf("%f", &r);
area = areaofcircle(r);
printf("%f", area);
}
float areaofcircle(float r)
{
float area;
area = PI*r*r;
return area;
}


