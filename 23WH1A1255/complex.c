#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main()
{
struct complex com;
printf("\n enter real,imag");
scanf("%d %d",&com.real,&com.imag);
printf("\n %d %d",com.real,com.imag);
}
