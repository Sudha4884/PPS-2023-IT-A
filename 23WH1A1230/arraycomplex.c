#include<stdio.h>
struct complex
{
int real;
int imaginary;
};
void main()
{
struct complex com[10];
int i;
//read 10 complex numbers
for(i=0;i<10;i++)
{
printf("\n enter real, imaginary");
scanf("%d%d", &com[i].real,&com[i].imaginary);
}
for (i=0;i<10;i++)
{
printf("\n %d+i%d",com[i].real,com[i].imaginary);
}
}


