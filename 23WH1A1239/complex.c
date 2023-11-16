#include<stdio.h>
struct comp
{
 int real,imag;
};
void main()
{
 struct comp c;
 puts("Enter real and imag no: ");
 scanf("%d%d",&c.real,&c.imag);
 printf("\n %d + %di", c.real,c.imag);
}
