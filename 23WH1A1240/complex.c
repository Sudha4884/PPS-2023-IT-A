#include<stdio.h>
//complex numbers
struct complex
{
int real,imag;
};
void main()
{
struct complex c;
printf("enter real,imag:");
scanf("%d%d",&c.real,&c.imag);
printf("%d+%di",c.real,c.imag);
}


