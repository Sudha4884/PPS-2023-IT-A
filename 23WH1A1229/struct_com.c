#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main()
{
struct complex c1;
int i;
printf("\n Enter real, imaginary");
scanf("%d%d",&c1.real,&c1.imag);
printf("%d + i%d", c1.real,c1.imag);
}
