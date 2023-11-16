#include<stdio.h>
#include<string.h>
struct complex
{
int real,image;
}*cptr;
struct complex *c1;
void main()
{

cptr=&c1;

printf("\n enter the real,image");
scanf("%d %d",&cptr->real,&cptr->image);
printf("\nthe complex  no is");
printf("\n(%d) +(%d)i",cptr->real,cptr->image);
printf("\n (%d)+ (%d)i",(*cptr),(*cptr));
}
