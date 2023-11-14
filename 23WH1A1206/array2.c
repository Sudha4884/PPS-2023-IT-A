#include<stdio.h>
struct complex
{
int real,imag;
};
void main()
{
struct complex c1[5];
int i;
for(i=0;i<5;i++)
{
printf("\n Enter real and imaginary parts");
scanf("%d%d",&c1[i].real,&c1[i].imag);
}
for(i=0;i<5;i++)
{
if(c1[i].imag>0)
{
printf("\n%d+%di",c1[i].real,c1[i].imag);
}
else if(c1[i].imag<0)
{
printf("\n%d %di",c1[i].real,c1[i].imag);
}
else
{
printf("\n%d",c1[i].real);
}
}
}

