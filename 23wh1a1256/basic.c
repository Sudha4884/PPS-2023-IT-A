#include<stdio.h>
void main()
{
float BS,DA,HRA,NS;
printf("\n enter basic salary of harshu");
scanf("%f",&BS);
DA=0.5*BS;
HRA=0.1*BS;
NS=BS+DA+HRA;
printf("\n basic salary of harshu = %f",BS);
printf("\n percentageof DA = %f",DA);
printf("\n percentage of HRA = %f",HRA);
printf("\n net salary of harshu = %f",NS);
}

