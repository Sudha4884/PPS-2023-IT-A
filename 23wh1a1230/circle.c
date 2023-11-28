#include<stdio.h>
#define pi 3.14
float areaOfCircle (float);
int main()
{
float radius,a;
scanf("%f",&radius);
a = areaOfCircle(radius);
printf("\n Area is %f",a);

return 0;
}
float areaOfCircle(float r)
{
float area;
area = pi*r*r;
return area;
}

