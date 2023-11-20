#include<stdio.h>
void main()
{
// simple interest

float p,q,r;
float si,ci;

printf("p=");
scanf("%f", &p);

printf("q=");
scanf("%f", &q);

printf("r=");
scanf("%f", &r);

si=p*q*r;
ci=p*pow((1+r/100),t);

printf("the simple interest is %f", si);
printf("the compound interest is %f", ci);
}
