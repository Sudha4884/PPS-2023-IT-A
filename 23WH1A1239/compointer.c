#include<stdio.h>
struct comp
{
 int real,imag;
}*cptr;
void main()
{
 struct comp c;
 cptr=&c;
 printf("\n Enter real,imag: ");
 scanf("%d%d",&cptr->real,&cptr->imag);
 printf("\n The complex number is: ");
 printf("\n %d + %di", (*cptr).real,(*cptr).imag);
}

