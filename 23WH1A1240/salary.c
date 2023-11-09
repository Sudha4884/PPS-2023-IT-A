#include<stdio.h>
void main()
{
float s,d,h,n;
printf("enter salary=");
scanf("%f",&s);
d=(50*s)/100;
h=(10*s)/100;
n=s+d+h;
printf("%f",d);
printf("\n%f",h);
printf("\n%f",n);
}

