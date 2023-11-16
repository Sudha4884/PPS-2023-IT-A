#include<stdio.h>
struct cmp
{
 int real,imag;
};
void main()
{
struct cmp *c;
struct cmp c1;
c =&c1;
printf("enter real,imag");
scanf("%d%d",&c->real,&c->imag);
printf("%d + %di",c->real,c->imag);
}


