#include<stdio.h>
struct cmplx
{
 int real,imag;
};
void main()
{
 int i,n;
 
 printf("enter n value");
scanf("%d",&n);
struct cmplx c[n];
for(i=1;i<n;i++)
{
printf("enter real , imag:");
scanf("%d%d",&c[i].real,&c[i].imag);
}
for(i=1;i<n;i++)
{
printf("\n %d + %di",c[i].real,c[i].imag);
}
}


