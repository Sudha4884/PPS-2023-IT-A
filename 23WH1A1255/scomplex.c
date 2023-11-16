#include<stdio.h>
struct complex
{
int real,imag;
}*cptr;
void main()
{
struct complex c;
cptr=&c;
printf("\n enter real,imag");
scanf("%d%d",&cptr->real,&cptr->imag);
printf("\n the complex no is");
printf("\n %d + %di",cptr->real,cptr->imag);
}
