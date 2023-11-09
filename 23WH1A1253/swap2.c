#include<stdio.h>
// swap without using temporary variable 
void main ()
{

int  X,Y;
 printf(" give value for x:");
printf(" give value for y:");
scanf("%d", &X);
scanf("%d", &Y);
X=X+Y;
Y=X-Y;
X=X-Y;

printf("swap value of x is %d",X);
printf(" swap value of Y is %d",Y);
}
