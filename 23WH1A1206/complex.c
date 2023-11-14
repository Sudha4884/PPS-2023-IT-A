#include<stdio.h>
struct complex
{
int real,imag;
};
void main()
{
struct complex c1;
printf("\n Enter real and imaginary part");
scanf("%d%d",&c1.real,&c1.imag);
printf("%d+%di",c1.real,c1.imag);
}

