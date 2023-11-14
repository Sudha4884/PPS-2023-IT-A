#include<stdio.h>
struct complex
{
int real;
int imag;
};
 int main()
{
struct complex c;
puts("enter real,imag");
scanf("%d%d",&c.real,&c.imag);
printf("%d + %di",c.real,c.imag);
}

  
