#include<stdio.h>
struct number
{
 int real;
int imag;
};
void main()
{
struct number com;
 printf("\n Enter real,imag");
scanf("%d%d",&com.real,&com.imag);
if (com.imag>0)
printf("\n %d+%di",com.real,com.imag);
else if (com.imag<0)
printf("\n %d%di",com.real,com.imag);
else
printf("\n%d",com.real);
}
