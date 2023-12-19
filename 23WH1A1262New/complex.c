#include<stdio.h>
struct complex
{
int real,imag;
}*cptr;
struct complex *cptr;
void main()
{
struct complex c1;
cptr=&c1;                   


printf("\nenter real,imag");
scanf("%d %d",&cptr->real,&cptr->imag);
printf("\n the complex no is:  ");
printf("\n%d+(%d)i",cptr->real,cptr->imag);
printf("\n%d+(%d)i",(*cptr).real,(*cptr).imag);
}
