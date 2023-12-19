#include<stdio.h>
struct complex
{
int real,imag;
}*cptr;
void main()
{
struct complex c1;
cptr=&c1;
printf("enter real and imag vaules");
scanf("%d%d",&(*cptr).real,&(*cptr).imag);
printf("\n %d+(%d)i",(*cptr).real,(*cptr).imag);
}
