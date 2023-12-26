#include<stdio.h>
#include<math.h>
void main()
{
    float p,t,r,si,ci;
    printf("Enter p,t,r values: ");
    scanf("%f %f %f",&p,&t,&r);
    si = p*t*r/100;
    ci=p*pow((1+r/100),t);
    printf("\nsi = %f",si);
    printf("\nci = %f",ci);
}
