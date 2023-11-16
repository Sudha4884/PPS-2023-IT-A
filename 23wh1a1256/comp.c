#include<stdio.h>
struct complex
{
int real,imag;
}*cptr;

void main()
{
struct complex c1;
cptr=&c1;
printf("\n enter real,imag");
scanf("%d%d",&cptr->real,&cptr->imag);
printf("\n the complex no is");
printf("\n %d+(%d)i",(*cptr).real,(*cptr).imag);
}

