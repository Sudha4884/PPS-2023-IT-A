#include<stdio.h>
struct complex
{
int a,b;
};
void main()
{
struct complex(*cptr),c;
cptr=&c;
puts("\nenter real and imaginary parts");
scanf(" %d %d",&cptr->a,&cptr->b);
printf("\n   %d+%di",(*cptr).a,(*cptr).b);
}

