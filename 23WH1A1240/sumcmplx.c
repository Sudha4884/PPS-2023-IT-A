#include<stdio.h>
struct cmplx
{
 int r,i;
};
void main()
{
 struct cmplx c1;
struct cmplx c2;
struct cmplx c3;
scanf("%d%d",&c1.r,&c1.i);
scanf("%d%d",&c2.r,&c2.i);
c3.r = c1.r+c2.r;
c3.i = c1.i+c2.i;
printf("%d+%di",c3.r,c3.i);
}


