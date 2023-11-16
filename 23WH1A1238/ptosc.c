#include<stdio.h>
#include<string.h>
struct complexnum
{
int real,image;
};
void main()
{
struct complexnum *cptr,*cptr1,c1,c2;
cptr = &c1;
cptr1 = &c2;
printf("\n enter the real and imaginary number: ");
scanf("%d%d",&(*cptr).real,&(*cptr1).image);
printf("\n%d+(%d)i",(*cptr).real,(*cptr1).image);
}
