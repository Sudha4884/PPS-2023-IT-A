#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main()
{
struct complex cmp;
printf("\n enter real,imag");
scanf("%d %d",&cmp.real,&cmp.imag);
printf("\n %d %d",cmp.real,cmp.imag);
}
