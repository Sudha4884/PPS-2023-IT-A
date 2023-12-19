#include<stdio.h>
struct complex
{
int real , imag;
}*cptr;
voidmain()
{
struct complex c1;
  cptr = &c1;
printf("\n Enter real,imag:");
scanf("%d%d," &cptr->real,& cptr->imag);
printf("\n the complex number is:");
printf("\n %d+(%d)i",cptr->real,cptr->imag);
printf("\n %d+(%d)i",(*cptr).real,(*cptr).imag);
}

