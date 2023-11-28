#include<stdio.h>
#define PI 3.14
int areaofcircle(int);
int main(){
int r;
int area,result;
printf("Enter a radius: ");
scanf("%d",&r);

result= areaofcircle(r);
printf("The area is %d",result);
}
int areaofcircle(int radius)
{int r;
int area;
area= 2 * PI * r;
return 0;
}
