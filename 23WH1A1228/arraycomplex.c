#include<stdio.h>
struct number
{int real;
int imag;
};
void main()
{
int i;
struct number com[2];
for(i=0;i<2;i++)
{
printf("\n Enter real,imag");
scanf("\n%d%d",&com[i].real,&com[i].imag);
}
for(i=0;i<2;i++)
{
if (com[i].imag>0)
printf("\n%d + %di",com[i].real,com[i].imag);
else if(com[i].imag<0)
printf("\n%d%di",com[i].real,com[i].imag);
else 
printf("\n%d",com[i].real);
}
}

