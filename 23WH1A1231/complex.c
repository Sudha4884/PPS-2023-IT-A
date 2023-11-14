#include<stdio.h>
struct complex
{
int real;
int img;
};
void main()
{
struct complex c;
puts("enter real,img");
scanf("%d%d", &c.real,&c.img);
printf("%d + %di", c.real,c.img);
}

