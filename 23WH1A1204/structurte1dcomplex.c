#include<string.h>
#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main()
{
struct complex c1;
printf("\n enter complex number");
scanf("\n %d %d ",&c1.real,&c1.imag);
printf("%d+i %d ",c1.real ,c1.imag);
}

