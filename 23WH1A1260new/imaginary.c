#include<stdio.h>
struct complex{
int real,imag;
};
void main()
{
struct complex c1;
printf("enter real and imag values");
scanf("%d%d",&c1.real,& c1.imag);
printf("%d+(%d)i",c1.real,c1.imag);
}
