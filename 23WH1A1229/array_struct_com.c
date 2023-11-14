// Arrays of structres 
#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main()
{
struct complex com[10];
int i;
//Read 10 complex number
for(i=0;i<5;i++)
{
printf("\n Enter real,imag");
scanf("%d%d",&com[i].real,&com[i].imag);
}
for(i=0;i<5;i++)
{
printf("\n %d+i%d",com[i].real,com[i].imag);
}
}
